#include <stdio.h>
int main(void){
    int entry;
    printf("Entrez le num d'un jour de la semaine:");
    scanf("%d", &entry);
    if(entry <= 7 && entry != 0){
        switch(entry){
            case 1:
                printf("On est Lundi\n");
                break;
            case 2:
                printf("On est Mardi\n");
                break;
            case 3:
                printf("On est Mercredi\n");
                break;
            case 4:
                printf("On est Jeudi\n");
                break;
            case 5:
                printf("On est Vendredi\n");
                break;
            case 6:
                printf("On est samedi\n");
                break;
            case 7:
                printf("On est dimanche\n");
                break;
        }
    }
}
