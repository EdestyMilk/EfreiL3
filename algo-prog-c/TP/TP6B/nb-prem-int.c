#include <stdio.h>
int main(void){
    int nb1;
    int nb2;
    int nb_prem;
    scanf("%d %d", &nb1, &nb2);
    for(int a=nb1 ; a <= nb2 ; a ++){
        nb_prem=0;
        for(int i=2; i != a-1; i++){
            if(a % i == 0){
                nb_prem=1;
            }
        
        }
        if(nb_prem == 0){
            printf("%d est un nombre premier\n", a);
        }
    }
}