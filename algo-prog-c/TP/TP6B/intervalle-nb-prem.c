#include <stdio.h>
#include <math.h>
int main(void){
    int x;
    int dom;
    int Som;
    for(int i = 100; i <= 500; i++){
        Som=0;
        x=i;
        while(x!=0){
            Som = Som + pow(x%10, 3);
            x=x/10;
        }
        if(i == Som){
            printf("%d ", i);
        }
    }
}