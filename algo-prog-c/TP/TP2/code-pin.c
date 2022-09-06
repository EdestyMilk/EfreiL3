#include <stdio.h>
int main(void){
    int ent,tries;
    tries = 0;
    int pin = 1244;
    printf("Entrez le code PIN\n");
    while( tries != 3){
        printf("Votre entrée : ");
        scanf("%d", &ent);
        if(ent == pin){
            printf("Trouvé\n");
            break;
        }
        else{
            printf("Faux %d\n", 3-tries);
            tries++;
        }
    }
}
