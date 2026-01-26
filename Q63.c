#include<stdio.h>
int main ()
{
  int a;
  printf("enter the value:");
  scanf("%d",&a);
  if(a%11==0){
    printf("divisible by 11:",a);
  }else{
    printf(" not divsible by 11:",a);
  }

    return 0;
}