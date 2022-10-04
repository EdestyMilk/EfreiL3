#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void){
    typedef struct Personne {
        char* nom;
        int age;
    } Personne;
    
    int size_tab=250;
    srand(time(NULL));
    struct Personne *pool;
    pool = malloc(size_tab*sizeof(struct Personne));

    for(int a=0;a!=size_tab; a++){
        pool[a].nom="Nobody";
        pool[a].age= rand() % 100;
        printf("Nom: %s\nIndex: %d\nAge: %d\n", pool[a].nom, a,pool[a].age);
        printf("--------------------\n");
    }
    for(int b=0;b!=size_tab; b++){
        while(pool[b].age >= 20){
            printf("Index %d: %d > 20\n", b, pool[b].age);
            int gap=size_tab-b;
            for(int c=0;c != gap; c++){
                pool[b+c]=pool[b+c+1];
            }
        }
    }
    printf("-------------------------------------------------------\n");
    for(int a=0;a!=size_tab; a++){
        printf("Nom: %s\nIndex: %d\nAge: %d\n", pool[a].nom, a,pool[a].age);
        printf("--------------------\n");
    }
}