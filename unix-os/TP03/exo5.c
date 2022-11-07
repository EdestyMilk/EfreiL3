#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void){
    pid_t child_state;
    pid_t child_state2;
    pid_t rc_pid;
    pid_t rc_pid2;
    int status;
    if(fork() == 0){
        execlp("ls","ls","-l","/",NULL);
    }
    else{
        if(fork() == 0){
            execlp("ps","ps", "-l","/",NULL);
        }
        else{
            rc_pid = waitpid(getpid()+1, &child_state, 0);
            if(rc_pid > 0){
                if(WIFEXITED(child_state)){
                    printf("Child number %d exited\n", getpid()+1);
                    status=1;
                }
            }
            rc_pid2 = waitpid(getpid()+2, &child_state2, 0);
            if(rc_pid2 > 0){
                if(WIFEXITED(child_state2)){
                    printf("Child number %d exited\n", getpid()+2);
                    status=0;
                }
            }
            if(!status)
                printf("Child number %d exited first", getpid()+1);
            else
                printf("Child number %d exited first", getpid()+2);
        }
        while(wait(NULL) > 0);
    }
}