#include <stdio.h>
#include <stdlib.h>
#include <time.h>
const int size1=15;
const int size2=7;
int tab[15][7];
int tabOccur[9]={0,0,0,0,0,0,0,0,0};
void nb_occurences(){ // Fonction permettant de récupérer le nombre d'occurences
    for(int a=0;a!=size1;a++){
        for(int b=0;b != size2; b++){
            tabOccur[(tab[b][a]-1)]++;
        }
    }
}

void desc_tri(){ // Fonction triant le tableau en descendant
    int tmp;
    for(int a=0;a != size1;a++){
        for(int b=size2; b!=0;b--){
            for (int c=0;c<b;c++){
                if(tab[a][c]<tab[a][c+1]){
                    tmp=tab[a][c];
                    tab[a][c]=tab[a][c+1];
                    tab[a][c+1]=tmp;
                }
            }
        }
    }
}
void del_line(){ // Fonction supprimant les nombres ayant des occurences inférieur ou égale à 3
        for(int c=0;c != 9;c++){
            if(tabOccur[c] <= 3){
                for(int d=0;d != size1; d++){
                    for(int e=0;e != size2; e++){
                        if(tab[d][e] == c+1)
                            tab[d][e]=0;
                    }
                }
            }
        }
}

int main(void){
    srand(time(NULL));
    for(int a=0;a!=size1;a++){ // Permet de générer un tableau aléatoire entre 1 et 9
        for(int b=0; b != size2; b++){
            tab[a][b] = rand() % (9 - 1 + 1) + 1;
            printf("%d ",tab[a][b]);
        }
        printf("\n");
    }
    printf("-------------\n");
    nb_occurences();
    for(int a=0;a != 9; a++){
        printf("Nombre d'occurences pour %d : %d\n", a+1, tabOccur[a]);
    }
    printf("--------------\n");
    del_line();
    desc_tri();
    for(int a=0;a!=size1;a++){
        for(int b=0; b != size2; b++){
            printf("%d ",tab[a][b]);
        }
        printf("\n");
    }
}
