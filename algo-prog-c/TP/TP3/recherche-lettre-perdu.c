#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(void){
    char tab[1000];
    char entry;
    int occu=0;
    for(int i = 0; i < 1000; i++){
        const int VALEUR_MIN = 'A', VALEUR_MAX = 'Z'; 
        char lettre = (char)((rand() % (VALEUR_MAX-VALEUR_MIN+1)) + VALEUR_MIN);
        tab[i]=lettre;
    }
    printf("Indiquez la lettre à rechercher : ");
    scanf("%c", &entry);
    for(int i = 0; i < 1000; i++){
        if(tab[i] == entry){
            occu++;
        }
    }
    printf("La lettre est présente %d fois", occu);
}