#include <stdio.h>
int main(void){
    int entry;
    int result=1;
    int facto=2;
    printf("Entrez un chiffre : ");
    scanf("%d", &entry);
    if(entry == 0){
        result=1;
    }
    else{
        while(facto <= entry){
            result=result*facto;
            facto=facto+1;
        }
    }
    printf("%d\n", result);
}