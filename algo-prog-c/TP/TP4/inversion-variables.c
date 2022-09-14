#include <stdio.h>
#include <stdlib.h>
int main(void){
    char prenom = 'A', nom='Z';
    char *p_prenom = &prenom;
    char *p_nom = &nom;
    printf("Vos initiales %c,%c\n", prenom, nom);
    char temp=*p_prenom;
    *p_prenom=*p_nom;
    *p_nom=temp;
    printf("Vos initiales inversé %c,%c\n", prenom, nom);
}