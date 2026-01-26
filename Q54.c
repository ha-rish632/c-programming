#include <stdio.h>
int main ()
{
   int a ;
   printf("Enter the year:");
   scanf("%d",&a);
   if(a%4){
    printf("(%d)it is not  a leep year.",a);
   }else {
    printf("(%d)it is  a leep year.",a);
   }

    return 0;
}