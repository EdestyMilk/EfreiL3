#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

const int N=20; // Buffer size
int main(void){
    char afilename[12] = "test1.txt";
    char buff[N];

    //Open file attempt in read only
    int f2 = open(afilename, O_RDONLY);
    if(f2 == -1){
        printf("open for write: failed\n");
        exit(1);
    }
    else{
        int nbreal=read(f2,buff,N);
        printf("J'ai lu %d chars\n", nbreal);
        printf("Voici les chars lu : %s\n", buff);
        close(f2);
    }
    return 0;
}