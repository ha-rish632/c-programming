#include<stdio.h>
int main ()
{
   int a,b,c,n;
   printf("Enter the value:");
   scanf("%d %d",&a,&b);
   c=a>=b ;
   n =a<= b;
   printf("%d %d",c,n);
   return 0;
}