#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>

int main(){
    int fd=open("bite",O_CREAT|O_WRONLY|O_TRUNC,0666); 
    char str[]="I like linux!\n";
    write(fd,(void*)str,14);
    close(fd);
    fd=open("bite",O_RDONLY);
    char buf[14]={0};
    read(fd,buf,14);
    fprintf(stdout,"%s",buf);
    close(fd);
    return 0;
}
