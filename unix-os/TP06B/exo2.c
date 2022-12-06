#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
int is_trigger=0;
void sig_handler(int signum){
    if(signum == 10 && is_trigger == 0){
        printf("BONJOUR");
        fflush(stdout);
        is_trigger=1;
    }
    else if(signum == 12){
        printf("BONSOIR");
        fflush(stdout);
    }
}

int main(void){
    signal(10, sig_handler);
    signal(12, sig_handler);
    while(1){}
}
