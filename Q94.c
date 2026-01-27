#include<stdio.h>
int main ()
{
    int a;
  printf("enter the seat type:");
  scanf("%d",&a);
  int b;
  printf("enter the show time:");
  scanf(" %d",&b);
  switch(a)
  {
  case 1:
     if(b>=18)
     printf("%d",150+50);
     else if(b<18)
     printf("150");
     break;
    case 2:
      printf("250");
      break;


  }
  return 0;
}