#include<stdio.h>
int main ()
{
    int a;
  printf("enter the attempt:");
  scanf("%d",&a);
  int b;
  printf("enter the mark:");
  scanf(" %d",&b);
  switch(a)
{
    case 1:
      if (b>=80)
      printf("excellent");
      else
      printf("Not Qualified");
      break;
    case 2:
         if (b>=60)
      printf("good");
      else
      printf("Not Qualified");
    break;
    case 3:
     
      printf("Needs Improvement") ;
}


  return 0;
}