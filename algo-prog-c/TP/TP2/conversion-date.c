#include <stdio.h>
int main(void){
    int day,month,year;
    scanf("%d/%d/%d",&day,&month,&year);
    switch(month){
        case 1:
            printf("%d Janvier %d\n", day, year);
            break;
        case 2:
            printf("%d Février %d\n", day, year);
            break;
        case 3:
            printf("%d Mars %d\n", day, year);
            break;
        case 4:
            printf("%d Avril %d\n", day, year);
            break;
        case 5:
            printf("%d Mai %d\n", day, year);
            break;
        case 6:
            printf("%d Juin %d\n", day, year);
            break;
        case 7:
            printf("%d Juillet %d\n", day, year);
            break;
        case 8:
            printf("%d Août %d\n", day, year);
            break;
        case 9:
            printf("%d Septembre %d\n", day, year);
            break;
        case 10:
            printf("%d Octobre %d\n", day, year);
            break;
        case 11:
            printf("%d Novembre %d\n", day, year);
            break;
        case 12:
            printf("%d Décembre %d\n", day, year);
            break;
    }
}
