#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <stdlib.h>
#include <sys/types.h>
#include <errno.h>
#include <sys/ioctl.h>
#include <assert.h>
#include <string.h>
#include <time.h>
int main(void){
    static int entry;
    static int till=1;
    static int fact;
    printf("Entrez un nombre: ");
    scanf("%d", &entry);
    while(till != entry){
        if(fork() == 0){
            fact=fact+(till*till+1);
            till++;
            printf("%d ", till);
        }
    }
    

}