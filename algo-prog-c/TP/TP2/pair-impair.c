#include <stdio.h>
int main(void){
    int nbr=0;
    int i = 2;
    int a;
    printf("Entrez un nombre : ");
    scanf("%d",&a);
    while(i < a-1 && nbr == 0){
        if(a % i == 0){
            nbr=1;
        }
        else{
            i=i+1;
        }
    }
    if(nbr == 0){
        printf("%d est un nombre premier\n", a);
    }
    else{
        printf("%d n'est pas un nombre premier\n", a);
    }
}
