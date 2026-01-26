#include<stdio.h>
int main ()
{
  int a;
  printf("enter the value:");
  scanf("%d",&a);
  if((a%3==0)&&(a%7==0)){
    printf("Multiple of both 3 and 7:",a);
  }else{
    printf(" not Multiple of both 3 and 7:",a);
  }

    return 0;
}