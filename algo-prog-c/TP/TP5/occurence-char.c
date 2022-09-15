#include <stdio.h>
int search_char(char* chain, char e){
    int occur=0;
    while(*chain != '\0'){
        if(*chain == e){
            occur++;
        }
        chain=chain+1;
    }
    return occur;
    
}
int main(void){
    char* chain = "Je suis une chaine de caractère";
    printf("%d\n",search_char(chain, 'e'));
}
