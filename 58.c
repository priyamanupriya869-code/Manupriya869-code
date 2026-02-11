#include <stdio.h>
struct store {
char title[20];
char author[20];
int prize;
};
int main() {
struct store s1 = {"the man", "Hasini",150};
    printf("title: %s\n" "author: %s\n" "prize: %d\n",s1.title,s1.author,s1.prize);

  struct store s2 = {"crystal block", "sowmya",115};
    printf("title: %s\n" "author: %s\n" "prize: %d\n",s2.title, s2.author,s2.prize );

      struct store s3 = {"habit", "manupriya",113};
    printf("title: %s\n" "author: %s\n" "prize: %d\n",s3.title, s3.author,s3.prize );

    return 0;
}
