#include<stdio.h>
int main ()
{
    int a;
  printf("enter the s/e:");
  scanf("%d",&a);
  int b;
  printf("enter the distance:");
  scanf(" %d",&b);
  switch(a)
{
    case 1:
       if(b<=30)
       printf("eligible");
       else if(b>30 && b<=100)
       printf("eligible with extra fee");
       else
       printf("invalid");
       break;
    case 2:
     if(b<=30)
      printf("eligible");
       else if(b>30 &&b<=100)
       printf(" not eligible ");
       else
       printf("invalid");
       break;

}

  return 0;
}