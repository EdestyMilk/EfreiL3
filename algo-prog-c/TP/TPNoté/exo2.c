#include <stdio.h>
int main(void){
    
    int a=0;
    int n;
    int sum_line=0;
    int sum_col=0;
    int sum_diag[n];
    int is_perfect=0;

    printf("Donnez la taille n pour créer la matrice n*n: "); // Création et allocation mémoire du tableau
    scanf("%d", &n);
    int tab[n][n];

    for(int a=0;a != n; a++){ // Remplissage du tableau
        for(int b=0; b!= n; b++){
            int tmp;
            printf("Entrez la valeur pour %d*%d: ",a+1, b+1);
            scanf("%d", &tmp);
            if(tmp > n*n && tmp > 1) // Permet de savoir si le carrée est parfait
                is_perfect=1;
            tab[a][b]=tmp;
        }
    }
    
    for(int a=0;a != n; a++){ // Calcul de la somme des lignes
        for(int b=0; b!= n; b++){
            int tmp=tab[a][b];
            sum_line=tmp+sum_line;
        }
    }

    for(int c=0; c != n ; c++){ // Calcul de la somme des colonnes
        for(int a=0;a != n; a++){
            sum_col=(tab[a][c]+sum_col);
        }
    }

    sum_diag[0]=0;
    sum_diag[1]=0;

    for(int d=0; d != n;d++){ // Calcul de la somme des diagonales
        
        sum_diag[0]=sum_diag[0]+tab[d][d];
    }
    int e=0;
    for(int d=n-1; d >= 0;d--){
        sum_diag[1]=sum_diag[1]+tab[e][d];
        e++;
    }
    printf("Somme Colonne : %d\n Somme Ligne : %d\n", sum_col, sum_line);
    printf("Somme diag 1: %d Somme diag 2: %d\n", sum_diag[0], sum_diag[1]);

    if(sum_col == sum_line sum_col/n+sum_line/n == sum_diag[0]+sum_diag[1]){ // Condition pour vérifier si le carrée est magique
        printf("La matrice est un carré magique ");
        if(is_perfect == 0) // Condition pour savoir si il est parfait
            printf("parfait\n");
        else
            printf("\n");
    }
}
