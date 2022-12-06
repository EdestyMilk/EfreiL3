#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>
#include <sys/wait.h>
#include <sys/types.h>
void sig_handler(int signum){
    printf("BONJOUR\n");
    fflush(stdout);
}
int main(void){
    if(fork() == 0){
        printf("PID Fils: %d\n", getpid());
        sleep(3);
        kill(getppid(), 10);
        fflush(stdout);
    }
    else{ 
        signal(10, sig_handler);
        wait(NULL);
        printf("Fermeture père\n");
        fflush(stdout);
        return 1;
    }
}
