# include<stdio.h>
int main ()
{
  int a;
  printf("Enter the type:");
  scanf("%d",&a);
  int age;
  printf("Enter the age:");
  scanf("%d",&age);
  int g;
    g=300 -(33*300)/100;
   switch(a)
   {

    case 1:
     if(age<12)
     printf(" Fare%d",150);
     if(age>=60)
     printf("fair:%d",g); 
     break;
     case 2:
     if(age<12)
     printf("Fair%d",500);
     else
     printf("fair:%d",1000);
     break;

     
   }
    return 0;
}