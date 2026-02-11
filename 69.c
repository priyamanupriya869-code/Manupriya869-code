//write a c program to open a same file a file can br text,word file or foalder link which cantain user information.
#include <stdio.h>
#include <stdlib.h>
int main(){
char path[1000];
printf("Enter a folder path: ");
 scanf("%s",path);
 system(path);
return 0;
}
