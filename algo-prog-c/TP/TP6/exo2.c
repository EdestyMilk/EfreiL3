#include <stdio.h>
#include <stdlib.h>
int main(void){
    typedef struct Personne{
        char nom[255];
        char prenom[255];
        char age[255];
        char filiere[255];
        char adresse[100];
    }Personne;
    struct Personne personne;
    printf("Vous allez entrez différentes informations\n");
    printf("Nom :");
    fgets(personne.nom, 255, stdin);

    printf("Prénom :");
    fgets(personne.prenom, 255, stdin);

    printf("Age :");
    fgets(personne.age,255,stdin);

    printf("Filière :");
    fgets(personne.filiere, 255, stdin);

    printf("Adresse :");
    fgets(personne.adresse, 255, stdin);

    FILE* fp = fopen("./fiche", "w");

    fprintf(fp, "Nom : %s\nPrénom : %s\nAge : %s\nFiliere : %s\nAdresse : %s\n", personne.nom, personne.prenom,personne.age,personne.filiere,personne.adresse);

}