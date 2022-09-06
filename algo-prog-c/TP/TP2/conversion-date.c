#include <stdio.h>
int main(void){
    int day,month,year;
    char const *mois[12]= {"Janiver", "Février", "Mars", "Avril", "Mai", "Juin", "Juillet", "Aout", "Septembre", "Octobre", "Novembre", "Décembre"};
    scanf("%d/%d/%d",&day,&month,&year);
    printf("%d %s %d", day, mois[month-1], year);
}
