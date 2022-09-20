#include <stdio.h>
int nb_parfait(int entry){
    int result=0;
    for(int a=1; a != entry-1; a++){
        if(entry % a == 0){
            result=result+a;
        }
    }
    if(result == entry){
        return 1;
    }
    else
        return 0;
}
int main(void){
    int nb1;
    int nb2;
    scanf("%d %d", &nb1, &nb2);
    for(int b=nb1; b<=nb2; b++){
        if(nb_parfait(b) == 1){
            printf("%d est un nombre parfait\n", b);
        }
    }
}
