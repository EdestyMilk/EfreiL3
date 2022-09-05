#include <stdio.h>
int main(void){
    int var1=123;
    int var2=18;
    int var1_back=var1;
    var1=var2;
    var2=var1_back;
    printf("var1=%d et var2=%d\n", var1, var2);
}
