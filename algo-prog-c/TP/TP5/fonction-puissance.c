#include <stdio.h>
int puissance(int a, int b){
    int result=a;
    for(int c = 1 ; c < b ; c++){
        result=result*a;
    }
    return result;
}
int main(void){
    printf("2 puissance 3 = %d\n", puissance(2,3));
}