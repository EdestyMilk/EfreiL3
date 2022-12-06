#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <sys/types.h>
int calc=0;
void sig_alarm(int signum){
    printf("%d\n", calc);
    fflush(stdout);
    alarm(3);
}

int main(void){
    signal(SIGALRM, sig_alarm);
    alarm(3);
    while(1){
        sleep(1);
        calc++;
    }
}
