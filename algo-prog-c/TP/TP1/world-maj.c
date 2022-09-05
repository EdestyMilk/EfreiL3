#include <stdio.h>
int main(void){
    char c;
    printf("Entrez un caractère : ");
    scanf("%c", &c);
    c=c-32;
    printf("Cela donne en majuscule : %c\n", c);
}
