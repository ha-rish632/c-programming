# include<stdio.h>
int main ()
{
 int a;
 printf("enter the  order ammount:");
 scanf("%d",&a);
 int b;
 printf("enter the  speed type:");
 scanf("%d",&b);
 switch(b)
 {
    case 1:
      printf("%d",50);
      break;

  case 2:
     if (a<1000)
     printf("%d",100);
     if(a>=1000)
     printf("free");
     break;


 }
    return 0;
}