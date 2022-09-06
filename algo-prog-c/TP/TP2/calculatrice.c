#include <stdio.h>
int main(void){
    char oper;
    int nb1;
    int nb2;
    int result;
    printf("Entrez opération [+,-,*,/]: ");
    scanf("%d%c%d", &nb1,&oper,&nb2);
    if(oper == '+' || oper == '-' || oper == '*' || oper == '/'){
        switch(oper){
            case '+':
                result = nb1 + nb2;
                break;
            case '-':
                result = nb1 - nb2;
                break;
            case '*':
                result = nb1 * nb2;
                break;
            case '/':
                if(nb2 > 0)
                    result = nb1 / nb2;
                else
                    printf("Non pas possible\n");
                    return 1;
                break;
        }
        printf("%d\n", result);
    }
}