#include <stdio.h>

int main(void){
    int haut;
    int larg;
    printf("Entrez la hauteur et la largeur : ");
    scanf("%d %d", &haut, &larg); 
    int perim=(haut*2)+(larg*2);
    int surf=haut*larg;
    printf("\tPerimètre : %d\n\tAire : %d\n", perim, surf);
}
