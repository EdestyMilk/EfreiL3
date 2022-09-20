#include <stdio.h>
#include <math.h>
int main(void){
    int N,tmp,N1,N2,cmpN1,cmpN2,cmp;
    cmp=1;
    cmpN1=0;
    cmpN2=0;
    N1=0;
    N2=0;
    scanf("%d", &N);
    while(N != 0){
        tmp=N%10;
        N=N/10;
        if(tmp % 2 == 0){
            N1=N1+(tmp*pow(10,cmpN1));
            cmpN1++;
        }
        else{
            N2=N2+(tmp*pow(10,cmpN2));
            cmpN2++;
        }
        cmp++;
    }
    printf("N1= %d N2= %d\n", N1,N2);
}