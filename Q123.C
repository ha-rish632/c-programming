#include<stdio.h>

int main ()
{
  int a;
  scanf("%d",&a);
   int  sum =0;  
  
    for ( int i = 0; a != 0; i++) {
       int digit = a % 10;
        sum += digit;
        a /= 10;
    }
    printf("%d",sum);
    return 0;
}