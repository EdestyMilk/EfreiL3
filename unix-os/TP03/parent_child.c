#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>
int main(void){
    int status;
    printf("Je suis le parent numéro: %d\n", getpid());
    for(int a=0; a<3; a++){
        if(fork() == 0){
            printf("Je suis le fils numéro %d\n", getpid());
            printf("Mon père est : %d\n", getppid());
            fflush(stdin);
            if(getpid()-1 == getppid()){
                for(int b=0; b<2; b++){
                    if(fork() == 0){
                        printf("Je suis le petit-fils: %d\n", getpid());
                        printf("Mon père est : %d\n", getppid());
                    }
                }
            }
            status =1;
            return 0;
        }
    }
    if(wait(&status) > 1)
        return 0;
}
