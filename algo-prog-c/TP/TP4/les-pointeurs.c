#include <stdio.h>
#include <stdlib.h>
int main(void){
    int a = 10;
    int *b=&a;
    scanf("%d", b);
    printf("La valeur %d est stocké à l'adresse %p ", a, b);
}