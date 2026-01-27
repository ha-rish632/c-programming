#include <stdio.h>
int main ()
{
int a;
printf("Enter the account type(s-1,f-2):");
scanf("%d",&a);
int b;
printf("Enter the year:");
scanf("%d",&b);
switch(a)
{

case 1:
printf("4%%");
break;

case 2:
   if(b<=3)
   printf("5%%");
   else
   printf("7%%");
   break;

}




return 0;
}