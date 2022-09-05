#include <stdio.h>
#define CHANGE_RATE 1.20
int main(void){
    float entry;
    float result;
    printf("Entrez un montant en Euro: ");
    scanf("%f", &entry);
    result=entry*1.20;
    printf("Vous avez donc %.2f Dollars\n", result);
}
