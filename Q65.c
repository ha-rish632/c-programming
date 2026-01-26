#include<stdio.h>
int main ()
{
 int a,b,c;
 printf("Enter the value:");
 scanf("%d %d %d",&a,&b ,&c);
 if((a==b)&&(b==c)){
    printf("Equilateral triangle",a,b,c);
 }else{
    printf(" not a Equilateral triangle",a,b,c);
 }

    return 0;
}