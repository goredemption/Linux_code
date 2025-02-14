#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>

//int main(){
//    int id=fork();
//    if(id==0){
//        printf("I'm a child process\n");
//    }
//    else{
//        int status=0;
//        wait(&status);
//        printf("I'm a father process\n");
//    }
//    return 0;
//}
//

//char* command="ps aux";
//char* argv[]={"aux",NULL};
int main(){
    int id=fork();
    printf("child pid=%d\n",id);
    if(id==0){
        sleep(20);
        printf("child process exit\n");
    }
    if(id>0){
        sleep(5);
        printf("father process exit\n");
        // execvp(command,argv);
    }
    return 0;
}

