#include <stdio.h>
int main ()
{
 int a ;
 printf("Enter the value of a:");
 scanf("%d",&a);
 if(a%5==0){
    printf("(%d)it is divisible by 5",a);

 }else{
    printf("(%d)it is not divisible by 5 ",a);
 }

    return 0;
}