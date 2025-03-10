#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>

int main(){
    int fd=open("./file.txt",O_TRUNC|O_CREAT|O_WRONLY,0666);
    sleep(10);
    char buf[15]="hello file!\n";
    write(fd,buf,15);
    close(fd);
    printf("program ran successfully\n");
    return 0;
}
