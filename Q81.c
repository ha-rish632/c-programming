# include <stdio.h>
int main ()
{
 int a;
 printf("Enter the attendence persentage:");
 scanf(" %d",&a);
 int b;
 printf("Enter the mark :");
 scanf(" %d",&b);
 {
    if(a<=75)
    printf("attendenc is invalid: fails");
     if (b>=75)
     printf("Distinction");
      else if(b>=50 && b<=74)
     printf(" Pass");
      else if (b<50)
     printf(" faill");
     
 }


    return 0;
}