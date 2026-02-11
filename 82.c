#include <stdio.h>
int main(){
FILE *fp;
char ch;
fp=fopen("charfile.txt","r");
if(fp==NULL){
    printf("file not found!\n");
    return 0;
}
printf("file contents.\n");
while(ch=fgetc(fp)!=EOF)
    putchar(ch);
fclose(fp);
return 0;
}
