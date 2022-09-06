#include <stdio.h>
int main(void){
    int entry;
    printf("Entrez un chiffre : ");
    scanf("%d", &entry);
    for(int i=0;i <= 10; i++){
        printf("%d x %d = %d\n", entry, i, entry*i);
    }
}
