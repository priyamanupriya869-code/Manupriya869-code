



#include <stdio.h>
struct student{
int id;
char name[20];
float marks;
};
int main(){
struct student s={1, "manupriya", 98.9};
printf("id: %d\n,name:%c,\nmarks: %f",s.id,s.name,s.marks);
return 0;
}
