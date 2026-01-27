#include<stdio.h>
int main ()
{
    int a;
  printf("enter the v:");
  scanf("%d",&a);
  int b;
  printf("enter the h:");
  scanf(" %d",&b);
  switch(a)
  {
    case 1 :
    if(b>=1&& b<=24)
        printf("%d",b*10);
         else 
    printf("invalid");
        break;
    case 2:
    if(b>=1 && b<=24)
    printf("%d",b*20);
    else 
    printf("invalid");
    break;    

  }
  return 0;
}