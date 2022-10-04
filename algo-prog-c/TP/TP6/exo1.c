#include <stdio.h>
#include <stdlib.h>
int compte_l(FILE* f){
    int count=1;
    fseek(f, 0, SEEK_SET);
    char c=getc(f);
    while(c != EOF){
            c=getc(f);
            if(c == '\n')
                count++;
        }
    return count;
}
int compte_c(FILE* f){
    int count=0;
    fseek(f, 0, SEEK_SET);
    char c;
    while(c != EOF){
        c=getc(f);
        if(c != '\n' && c != EOF)
            count++;
    }
    return count;
}
int compte_m(FILE* f){
    int count=1;
    fseek(f, 0, SEEK_SET);
    char c=getc(f);
    while(c != EOF){
            c=getc(f);
            if(c == ' ' || c == '\n')
                count++;
        }
    return count;
}
int main(void){
    FILE* fd = fopen("./test", "r");
    if(fopen > 0){
        printf("Nombre de lignes : %d\n",compte_l(fd));
        printf("Nombre de mots : %d\n", compte_m(fd));
        printf("Nombre de caractères : %d\n", compte_c(fd));
        fclose(fd);
        return 0;
    }
    else
        return 1;
}
