#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(void){
    printf("Le pid est : %d\n", getpid());
    printf("Le ppid est : %d", getppid());
}
