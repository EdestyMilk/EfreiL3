#include <stdio.h>
int main(void){
    int matr[4][4]={{1,0,0,0},
                    {0,1,0,0},
                    {0,0,1,0},
                    {0,0,0,1}};
    for(int i = 0; i < 4; i++){
        for(int a = 0; a < 4; a++){
            printf("%d",matr[i][a]);
        }
        printf("\n");
    }
}