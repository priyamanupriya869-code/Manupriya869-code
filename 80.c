#include <stdio.h>
int main(){
FILE*fp;
fp=fopen("example.txt","w");
if(fp==NULL){
    printf("file oprning failed!\n");
    return 1;
}
printf("file opened successfully using fopen().\n");
fclose(fp);
printf("file close successfully using fclose().\n");
return 0;
}
