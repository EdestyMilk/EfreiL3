#include <stdio.h>
int main(void){
    
    int a=0;
    int n;
    int sum_line=0;
    int sum_col=0;
    int sum_diag[n];
    int is_perfect=0;

    printf("Donnez la taille n pour créer la matrice n*n: ");
    scanf("%d", &n);
    int tab[n][n];

    for(int a=0;a != n; a++){
        for(int b=0; b!= n; b++){
            int tmp;
            printf("Entrez la valeur pour %d*%d: ",a+1, b+1);
            scanf("%d", &tmp);
            if(tmp > n*n && tmp > 1)
                is_perfect=1;
            tab[a][b]=tmp;
        }
    }
    
    for(int a=0;a != n; a++){
        for(int b=0; b!= n; b++){
            int tmp=tab[a][b];
            sum_line=tmp+sum_line;
        }
    }

    for(int c=0; c != n ; c++){
        for(int a=0;a != n; a++){
            sum_col=(tab[a][c]+sum_col);
        }
    }

    sum_diag[0]=0;
    sum_diag[1]=0;

    for(int d=0; d != n;d++){
        
        sum_diag[0]=sum_diag[0]+tab[d][d];
    }

    for(int d=n-1; d >= 0;d--){
        sum_diag[1]=sum_diag[1]+tab[d][d];
    }
    printf("Somme Colonne : %d\n Somme Ligne : %d\n", sum_col, sum_line);
    printf("Somme diag 1: %d Somme diag 2: %d\n", sum_diag[0], sum_diag[1]);

    if(sum_col == sum_line){
        if(sum_col/n+sum_line/n == sum_diag[0]+sum_diag[1]){
            printf("La matrice est un carré magique ");
        }
        if(is_perfect == 0)
            printf("parfait\n");
        else
            printf("\n");
    }
}
