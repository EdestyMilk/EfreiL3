#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <stdlib.h>
#include <sys/types.h>
#include <errno.h>
#include <sys/ioctl.h>
#include <assert.h>
#include <string.h>
#include <time.h>
int INTERV = 1;
void sig_quit(int sig){
    exit(0);
}
void sig_double(int sig){
    INTERV=INTERV*2;
}
void sig_divide(int sig){
    INTERV=INTERV/2;
}
int main(int argc, char **argv)
{
    char *current_day, *current_time;
    signal(3, sig_quit);
    signal(2, sig_double);
    signal(20, sig_divide);
    while(1){
        struct winsize w;
        sleep(INTERV);
        ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
        system("clear");
        for(int a=0; a != w.ws_row/2; a++){
            printf("\n");
        }
        for(int b=0; b != (w.ws_col/2)-4; b++){
            printf(" ");
        }

        fflush(stdout);
        time_t t = time(NULL);
        struct tm tm = *localtime(&t);
        printf("%02d:%02d:%02d\n", tm.tm_hour, tm.tm_min, tm.tm_sec);
    }
        fflush(stdout);
}
    
    