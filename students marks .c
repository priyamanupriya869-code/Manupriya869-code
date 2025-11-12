#include <stdio.h>
int main()
{
    float m1,m2,m3,total , Average ;
    char G;
    printf ("Enter the marks : ");
    scanf ("%f%F%f", &m1,&m2,&m3);
    total = m1+m2+m3 ;
    Average = total/3;
    printf ("The total marks = %f\n", total);
    printf ("The average marks = %f\n", Average );
    if (Average >=90)
    G = 'A';
    else if (Average >=80)
    G ='B';
    else if (Average >=70)
    G = 'C';
    else if (Average >=60)
        G ='D';
    else if (Average >=50)
    G ='E';
    else G ='F';
    printf ("Grade = %c\n",G);
    if (Average <=50)
    {
   if (m1<=50||m2<=50||m3 <=50)


    printf ("fail");
    }
        else printf ("pass");

    return 0;
}
