#include<stdio.h>
int main(void){
    char tab[100];
    gets(tab);
    for(int i = 0; i < 100 && tab[i] != '\0'; i++){
        if(tab[i] <= 122 && tab[i] >= 97){
            tab[i] = tab[i] - 32;
        }
    }
    puts(tab);
}
