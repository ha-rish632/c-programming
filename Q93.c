#include<stdio.h>
int main ()
{
    int a;
  printf("enter the a/e:");
  scanf("%d",&a);
  int b;
  printf("enter the access:");
  scanf(" %d",&b);
  switch(a)
{
    case 1:
     printf("full access");
     break;
    case 2:
     if(b>=1&&b<=20)
     printf("limited access");
     else if (b>20)
     printf("access denied"); 
      break;
}


  return 0;
}