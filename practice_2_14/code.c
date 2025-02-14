#include<unistd.h>
#include<stdio.h>

//int main(){
//    printf("I'm a process\n");
//    char* argv[]={(char*)"ls",(char*)"-l",(char*)"-a",NULL};
//    int status=execv("/usr/bin/ls",argv);
//    printf("I'm replaced, %d\n",status);
//    return 0;
//}

//int main(){
//    printf("I'm a process\n");
//    execl("/usr/bin/ls","ls","-l","-a",NULL);
//    printf("I'm replaced\n");
//}

//int main(){
//    execlp("ls","ls","-l","-a",NULL);
//}

//int main(){
//    char *envp[] = {(char *)"MY_VAR=HelloWorld", NULL };
//    execle("/usr/bin/bash","bash","-c","echo $MY_VAR",NULL,envp);
//    return 0;
//}

//int main(){
//    char* argv[]={(char*)"touch",(char*)"log.txt",NULL};
//    execv("/usr/bin/touch",argv);
//    return 0;
//}

//int main(){
//    char* argv[]={(char*)"ls",(char*)"-a",(char*)"-l",NULL};
//    execvp("ls",argv);
//    return 0;
//}

int main(){
    //char* argv[]={(char*)"bash",(char*)"-c",(char*)"echo $MY_VAR",NULL};
    char* argv[]={(char*)"bash",(char*)"-c",(char*)"ls -l -a",(char*)"-l",NULL};
    char* envp[]={(char*)"MY_VAR=HelloLinux",NULL};
    execvpe("bash",argv,envp);
}
