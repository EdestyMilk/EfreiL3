#include <stdio.h>
int main(void){
    int nbr=0;
    int tmp=0;
    int nbr_inverse=0;;
    int v_if=0;
    printf("%d\n", scanf("%d", &nbr));
    tmp=nbr;
    while(tmp != 0){
        nbr_inverse=nbr_inverse*10;
        nbr_inverse=nbr_inverse+tmp%10;
        tmp=tmp/10;
    }
    if(nbr == nbr_inverse)
        v_if=1;
    printf("%d", v_if);
}