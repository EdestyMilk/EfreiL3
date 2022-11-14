#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <stdlib.h>
#include <sys/types.h>
#include <errno.h>
#include <assert.h>
void signal_handler(int signum){
    printf("\nNon la je le sens pas finalement");
    exit(0);
}
int main(void){
    signal(SIGALRM, signal_handler);
    printf("Etes-vous hautain ?");
    char entry[4];
    alarm(12);
    scanf("%3s", entry);
    alarm(12);
    printf("Etes-vous toujours énervé ?");
    scanf("%3s", entry);
    alarm(12);
    printf("Hmmm... Jouer vous à Apex");
    scanf("%3s", entry);
    printf("Bravo Vous avez réussi à répondre");
    return 0;
}

