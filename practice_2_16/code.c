#include<stdio.h>

int main(){
    FILE* w=fopen("bite","w");
    fprintf(w,"linux so easy!\n"); 
    fclose(w);
    //fprintf(stdout,"test\n");
    FILE* r=fopen("bite","r");
    char str[20]={0};
    fread(str,1,15,r);
    fprintf(stdout,"%s",str);
    fclose(r);
    return 0;
}
