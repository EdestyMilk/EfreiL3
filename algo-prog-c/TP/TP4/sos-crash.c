#include <stdio.h>
int main(void){
    int age=23;
    int *p_age=&age;
    printf("Quel est votre âge ?");
    scanf("%d", p_age);
    printf("Vous avez %d ans\n", age);
}