#include<stdio.h>
int main ()
{
    int a;
  printf("enter the clsss:");
  scanf("%d",&a);
  int b;
  printf("enter the kg:");
  scanf(" %d",&b);
  switch(a)
  {
    case 1:
    printf("%d",b*300);
    break;
    case 2:
    if(b<=3)
    printf("free");
    else if(b>3 && b<=20)
    printf("%d",b*300);
    else 
    printf("invalid");
    break;
  }

 return 0;
}
