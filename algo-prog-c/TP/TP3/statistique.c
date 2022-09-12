#include <stdio.h>
#define SIZE_TAB 5
int main(void){
    int tab[SIZE_TAB];
    int min,max;
    float ave=0;
    printf("Remplir le tableau suivant :\n");
    for(int i = 0; i < SIZE_TAB; i++){
        printf("tab[%d]:", i);
        scanf("%d", &tab[i]);
    }
    min=tab[0];
    max=tab[0];
    for(int i = 0; i < SIZE_TAB; i++){
        if(tab[i] < min){
            min=tab[i];
        }
        if(tab[i] > max){
            max=tab[i];
        }
        ave=ave+tab[i];
    }
    ave=ave/SIZE_TAB;
    printf("max = %d, min = %d, average = %f", max, min, ave);
}