#include <stdio.h>
int main(void){
    int entry;
    char const *jours[7]={"Lundi", "Mardi", "Mercredi", "Jeudi", "Vendredi", "Samedi", "Dimanche"};
    printf("Entrez le num d'un jour de la semaine:");
    scanf("%d", &entry);
    if(entry <= 7 && entry != 0){
        printf("On est %s\n", jours[entry-1]);
    }
    else{
        printf("Numéro invalide\n");
    }
}
