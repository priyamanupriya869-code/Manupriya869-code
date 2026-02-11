#include <stdio.h>
int main(){
FILE *fp;
fp=fopen("data.txt","n");
if(fp==NULL){
    printf("file cannot be opeaned!\n");
    return 1;
}
fprintf(fp,"this line is appended at the the end.\n");
fclose(fp);
printf("data appended successfully.\n");
return 0;
}
