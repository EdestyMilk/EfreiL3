#include <stdio.h>
int main (void){
    int age;
    printf("Donnez votre âge:");
    scanf("%d", &age);
    if(age >= 18){
        printf("Vous êtes majeur\n");
    }
    else{
        printf("Vous êtes mineur\n");
    }
}
