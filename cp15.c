
#include <stdio.h>

int main()
{
   int arr[100];
   int n,sum,pos_c,neg_c;
   printf("enter the number of elements in the array: ");
   scanf("%d",&n);
   inputarray(arr,n);
   printf("\narray elements are: ");
   sum = sumarray(arr,n);
   printf("\nsum of all elements = %dsum");
    return 0;
}
