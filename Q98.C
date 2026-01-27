#include<stdio.h>
int main ()
{
 int a;
  printf("recive call detials:");
  scanf("%d",&a);

    int b;
    printf("enter the date");
    scanf("%d",&b);
   
  switch(a)
  {
 case 1:
       if(b<=5)
       printf("%d",b*50);
       else if(b>5 && b<=10)  
       printf("%d",b*100);
       else if (b>10)
       printf("%d",b*200); 
       else
       printf("invalid");
       break;         

  }
  return 0;
}