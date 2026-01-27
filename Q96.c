#include<stdio.h>
int main ()
{
    int a;
  printf("enter the type of customer:");
  scanf("%d",&a);
  int b,d;
  printf("enter the bill ammount:");
  scanf("%d",&b,&d);
  switch(a)
  {
    case 1:
     d =(b*5/100);
     printf("%d",b-d);
     break;
    case 2:
      d=(b*15/100);
      printf("%d",b-d);

  }

  return 0;
}