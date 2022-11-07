#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void){
    printf("Je suis le père numéro %d\n", getpid());
    if(fork() == 0){
        
        
        if(fork() == 0){
            printf("Je suis le petit fils numéro %d du père %d\n", getpid(), getppid());
        }
        else{
            if(fork() == 0){
                printf("Je suis le petit fils numéro %d du père %d\n", getpid(), getppid());
            }
            else{
                sleep(1); //A
                printf("Je suis le fils 1 numéro %d du père %d\n", getpid(), getppid());
            }
        }
    }
    else{
        if(fork() == 0){
            sleep(1); //B
            printf("Je suis le fils 2 numéro %d du père %d\n", getpid(), getppid());
            
        }
        else{
            if(fork() == 0){
                sleep(1); //A
                printf("Je suis le fils 3 numéro %d du père %d\n", getpid(), getppid());
               
            }
        }
    }
    while(wait(NULL) > 0);
}