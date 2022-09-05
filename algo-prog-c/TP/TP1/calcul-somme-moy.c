#include <stdio.h>
int main(void){
    int entier1;
    int entier2;
    int entier3;
    int sum;
    int moy;
    printf("Entrez 3 entiers : ");
    scanf("%d %d %d", &entier1, &entier2, &entier3);

    sum = entier1 + entier2 + entier3;
    moy = sum/3;
    printf("\tSomme : %d \n\tMoyenne: %d\n", sum,moy);
}
