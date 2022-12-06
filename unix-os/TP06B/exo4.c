#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <signal.h> 
void sig_father(int signum){
    printf("ping\n");
    fflush(stdout);
}
void sig_son(int signum){
    printf("pong\n");
    fflush(stdout);
}
int main(void){
    pid_t pid = fork();
    if(pid == 0){
        signal(12, sig_son);
        while(1){
            sleep(1);
            fflush(stdout);
            kill(getppid(), 10);
        }
    }
    else{
        signal(10,sig_father);
        sleep(2);
        while(1){
            sleep(1);
            fflush(stdout);
            kill(pid, 12);
        }
    }
}
