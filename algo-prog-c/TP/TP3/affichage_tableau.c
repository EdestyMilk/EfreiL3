#include <stdio.h>
int main(void){
    int tab[5] = {1,2,3,4,5};
    printf("Tableau: ");
    for(int i = 0; i < 5; i++){
        printf("%d ", tab[i]);
    }
    printf("\nInverse:");
    for(int i = 4; i >= 0; i--){
        printf("%d ", tab[i]);
    } 
    printf("\n");
}