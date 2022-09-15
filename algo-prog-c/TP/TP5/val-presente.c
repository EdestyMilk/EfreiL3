#include <stdio.h>
int search_val(int tab[], int size, int search){
    for(int a=0;a<size;a++){
        if(search == tab[a]){
            return a;
        }
        else
            return -1;
    }
}
int main(void){
    int tab[10]={10,1,93,30,32,64,98,90,43,21};

    printf("%d", search_val(tab, 10, 90));
}