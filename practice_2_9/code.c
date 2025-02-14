#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>
#include<stdio.h>

int main(){
    int id=fork();
    if(id>0){
        int status;
        waitpid(id,&status,0);
        printf("exit code:%d\n", WEXITSTATUS(status));
        printf("coredump code:%d\n",WCOREDUMP(status));
    }
    else{
        printf("I'm a child process\n");
        sleep(5);
    }
}
