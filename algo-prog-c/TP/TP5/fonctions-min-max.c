#include <stdio.h>
int min(int a, int b){
    if(a < b)
       return a;
    else 
       return b;
}
int max(int a, int b){
    if(a > b)
        return a;
    else
        return b;
 }
int main(void){
    int minV = min(1, 2);
    int maxV = max(minV, 3);
    printf("Le min de 1 et 2 est %d\n", minV);
    printf("Le max de 1 et de 3 est %d\n", maxV);
}

