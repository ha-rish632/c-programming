#include<stdio.h>
int main ()
{
  int a;
  printf("Enter the value :");
  scanf("%d",&a);
  if((a>=10)&&(a<=20)){
    printf("Number is within range",a);
  }else{
     printf(" Number not  within range",a);
  }

    return 0;
}