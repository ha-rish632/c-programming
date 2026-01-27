#include<stdio.h>
int main ()
{
    int a;
  printf("enter the type of call:");
  scanf("%d",&a);
  int b;
  printf("enter the mint");
  scanf("%d",&b);
  switch(a)
  {
 case 1:
     printf("%d",b*1);
     break;
 case 2:
     printf("%d",b*3);
     break;    
case 3:
printf("%d",b*10);
break;
  }
return 0;
}