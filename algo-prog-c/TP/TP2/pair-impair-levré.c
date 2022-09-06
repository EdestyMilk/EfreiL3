#include <stdio.h>
int main(void){
    int entry;
    printf("Entrz un nombre : ");
    scanf("%d", &entry);
    if(entry % 2 == 0){
        printf("Nombre pair\n");
    }
    else{
        printf("Nombre impair\n");
    }
}
