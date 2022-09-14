#include <stdio.h>
int main(void){
    char *oui = "Je suis une chaine de caractère qui s'allongent désormais";
    int a=0;
    char *p_oui=oui;
    int cpt=0;
    while(*p_oui != '\0'){
        printf("%c", *p_oui);
        p_oui=p_oui+1;
        cpt++;
    }
    printf("\n%d",cpt);
}