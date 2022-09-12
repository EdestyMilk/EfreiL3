#include <stdio.h>
int main(void){
    int matr1[3][2]={{1,3},
                     {1,0},
                     {1,2}};
    int matr2[3][2]={{0,0},
                     {7,5},
                     {2,1}};
    int result[3][2];
    for(int i = 0; i < 3;i++){
        for(int a = 0; a < 2; a++){
            result[i][a]=matr1[i][a] + matr2[i][a];
        }
    }
    for(int i = 0; i < 3;i++){
        for(int a = 0; a < 2; a++){
            printf("%d", result[i][a]);
        }
        printf("\n");
    }
}