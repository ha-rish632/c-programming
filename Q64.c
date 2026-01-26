#include<stdio.h>
int main ()
{
 int a,b,c;
 printf("Enter the value:");
 scanf("%d %d %d",&a,&b ,&c);
 if(a+b+c==180){
    printf("Valid triangle",a,b,c);
 }else{
    printf(" not a Valid triangle",a,b,c);
 }

    return 0;
}