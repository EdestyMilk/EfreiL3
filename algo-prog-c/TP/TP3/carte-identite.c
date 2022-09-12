#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void){
    char birth_date[10];
    char Name[10];
    char fname[10];
    char eye_color[10];
    printf("Donnez les informations:\n");
    printf("\tDate de naissance : ");
    scanf("%s", birth_date);
    printf("\tNom : ");
    scanf("%s", Name);
    printf("\tPrénom : ");
    scanf("%s", fname);
    printf("\tCouleur des yeux : ");
    scanf("%s", eye_color);
    printf("Vous vous appelez %s %s, vous êtes née le %s et vos yeux sont %s", fname, Name, birth_date, eye_color);
}