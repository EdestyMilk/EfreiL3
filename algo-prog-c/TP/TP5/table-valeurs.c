#include <math.h>
#include <stdio.h>
int calcul(void){
    double result;
    printf("X\tF(X)\n");
    for(int a=1; a <= 10; a++){
        result = sin(a) + log(a) - sqrt(a);
        printf("%d\t%f\n",a, result);
    }
}
int main(void){
    calcul();
}
