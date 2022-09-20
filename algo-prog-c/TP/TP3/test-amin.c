#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>



int main(void) {    
    char tab[100];
    int i;
    printf("Ecrire un message: ");
    scanf("%s",tab);
    for (i = 0; i < 100 && tab[i]!='\0'; i++)
    {
        if (tab[i] >= 'a' && tab[i] <= 'z')
        {
            tab[i] = tab[i] -32;
        }
        printf("tab[%d] %c\n", i, tab[i]);
        
    }
    printf("Donne en masjuscule: %s", tab);
    return 0;
}
