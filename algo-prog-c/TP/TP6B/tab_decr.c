#include <stdio.h>
#include <stdlib.h>
#define ARRAY_SIZE 20
int* sort_decr(int a[], int n){
    int i, j, temp;
    for(i=0;i< n-1;i++){
        for(j=i+1;j< n;j++){
            if(*(a+i)< *(a+j)){
                temp = *(a+i);
                *(a+i) = *(a+j);
                *(a+j) = temp;
            }
        }
    }
    return a;
}
int main(void){

    int tab[20]={10,11,32,15,8,9,2,45,100,30,22,67,98,41,21,54,7,4,5,1};
    int*a = sort_decr(tab, ARRAY_SIZE);
    for(int b; b < ARRAY_SIZE; b++){
        printf("%d ", a[b]);
    }
    
    
}