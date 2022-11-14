#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <stdlib.h>
#include <sys/types.h>
#include <errno.h>
#include <assert.h>
int main(int argc, char* argv[]){
    char * paramList[10];
    const char* temp=NULL;
    int offset;
    if(argc >= 2){
        for(int i=1; i!= argc; i++){
            temp=argv[i];
            paramList[i-1]=argv[i];
            offset=i;
        }
        paramList[offset]=NULL;
        if(fork() == 0)
            execv(paramList[0], paramList);
    }
}
