#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void){
    typedef struct Point{
        float x;
        float y;
    } Point;
    typedef struct Cercle{
        struct Point Centre;
        float rayon;
    } Cercle;
    

    int size_tabC=10;

    struct Cercle cercles[size_tabC];
    struct Point point;

    srand(time(NULL));
    for(int a=0; a!= size_tabC; a++){
        printf("--------------------\n");
        cercles[a].Centre.x= ((float)rand()/(float)(RAND_MAX));
        cercles[a].Centre.y= ((float)rand()/(float)(RAND_MAX));
        printf("Le Cercle %d se trouve à \nx: %f\nrayon: %f\n", a, cercles[a].Centre.x, cercles[a].Centre.y);
    }
    printf("--------------------\n----------------------------------\n");
    printf("--------------------\n");
    point.x= ((float)rand()/(float)(RAND_MAX));
    point.y= ((float)rand()/(float)(RAND_MAX));
    printf("Le Point se trouve à \nx: %f\ny: %f\n", point.x, point.y);
    for(int a=0; a!= size_tabC; a++){
        if (cercles[a].Centre.x - point.x < cercles[a].rayon && cercles[a].Centre.y - point.y < cercles[a].rayon){
            printf("Le point se trouve dans le cercle %d\n", a);
    }
    }
}