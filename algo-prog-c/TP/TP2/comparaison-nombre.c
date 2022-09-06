#include <stdio.h>
int main(void){
    int nb1,nb2;
    printf("Vous allez entrer deux nombres\n");
    printf("\tNombre 1:");
    scanf("%d", &nb1);
    printf("\tNombre 2:");
    scanf("%d", &nb2);

    if(nb1 == nb2){
        printf("Les nombres sont égaux\n");
    }
    else{
        if(nb1 > nb2){
            printf("Le nombre 1 %d est supérieur au nombre 2 %d\n", nb1,nb2);
        }
        else{
            printf("Le nombre 2 %d est supérieur au nombre 1 %d\n", nb2, nb1);
        }
    }
}
