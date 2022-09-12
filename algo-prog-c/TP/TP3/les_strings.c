#include <stdio.h>
#include <string.h>
int main(void){
    char chaine[] = {'S','a','l','u','t',' ','l','e','s',' ','c','o','d','e','u','r','s','!'};
    char chaine2[strlen(chaine)];
    strncpy(chaine2, chaine, 5);
    puts(chaine);
    puts(chaine2);
}