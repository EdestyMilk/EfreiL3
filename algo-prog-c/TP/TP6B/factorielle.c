#include <stdio.h>
#include <stdlib.h>
int get_facto(int nb){
    if(nb == 0)
        return 1;
    return nb * get_facto(nb-1);
}
int main(void){
    printf("%d",get_facto(3));
}