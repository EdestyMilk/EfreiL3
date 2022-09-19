#include <stdio.h>
int is_prem(int a){
    int nbr = 0;
    int i=2;
    while(i < a-1 && nbr == 0){
        if(a % i == 0)
            nbr=1;
        else
            i++;
    }
    return nbr;
}
int main(void){
    int a;
    int b;
    printf("Entrez un intervalle de nombre premiers :");
    scanf("%d %d", &a, &b);
    for(int c=a; c != b; c++){
        if(is_prem(c) == 0){
            printf("%d est un nombre premier\n", c);
        }
    }
}