#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
#define ARRAY_MAX 20
int main(void){
    int *tabDyn = NULL;
    time_t t;
    int sum=0;
    srand((unsigned) time(&t));
    tabDyn = malloc(ARRAY_MAX*sizeof(int));
    for(int a=0; a != ARRAY_MAX; a++){
        *tabDyn=rand() % 10;
        printf("%d ", *tabDyn);
        tabDyn=tabDyn+1;
    }
    for(int a=0; a != ARRAY_MAX+1; a++){
        sum=sum+*tabDyn;
        tabDyn=tabDyn-1;
    }
    printf("Somme : %d\n", sum);
}