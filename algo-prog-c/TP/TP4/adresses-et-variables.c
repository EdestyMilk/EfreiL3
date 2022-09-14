#include <stdio.h>
#include <stdlib.h>
int main(void){
    char var;
    var='A';
    printf("Informations sur ma variable :\n\ttype : %s\n\tTaille : %lu octets\n\tContenu : %c\n\tAdresse : %p\n", "char", sizeof(var), var, &var);
}
