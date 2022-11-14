#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <stdlib.h>
#include <sys/types.h>
#include <errno.h>
#include <assert.h>
void sig_handler(int sig){
    switch(sig){
        case 10:
            printf("MERCI\n");
            break;
        case 12:
            printf("THANKS\n");
            break;
        case 2:
            printf("END OF LINE\n");
            exit(0);
            break;
    }
}
int main(void){
    signal(10, sig_handler);
    signal(12, sig_handler);
    signal(2, sig_handler);
    while(1){}
}