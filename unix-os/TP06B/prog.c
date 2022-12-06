#include <stdio.h>
#include <signal.h>

void handINT(int signo) {
    signal (SIGINT, handINT);
    printf ("reception d'un signal SIGINT\n"); 
}

void main() {
    signal (SIGINT, handINT) ;
    printf("processus : %d\n", getpid ( ));
    while (1) ;
}
