#include <stdio.h>
#define PI 3.14
int main(void){
    float rayon,diam,circ,aire,vol,haut;
    printf("Entrez le rayon du cercle : ");
    scanf("%f", &rayon);
    diam=rayon*2;
    circ=diam*PI;
    aire=rayon*rayon*PI;
    printf("\tDiamètre: %.2f\n\tCirconférence : %.2f\n\tAire : %.2f\n", diam, circ, aire);
    printf("Entrez la hauteur du cylindre : ");
    scanf("%f", &haut);
    vol=PI*(rayon*rayon)*haut;
    printf("\tVolume : %.2f\n", vol);
}
