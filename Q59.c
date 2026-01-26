# include <stdio.h>
int main ()
{
 int a ;
 printf("Enter the value of a:");
 scanf("%d",&a);
 if((a>=100)&&(a<=999)){
    printf("three digit number",a);

 }else{
    printf(" not a three digit number",a);
 }

    return 0;
}