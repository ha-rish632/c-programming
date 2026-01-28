# include <stdio.h>
int main ()
{ 
   int a,b,d;
   int sum=0,factor,i;
   scanf("%d",&a);
    b=a;
   for(; b>0;b=b/10)
   {
          d=b%10;
      factor=1;
      for(i=1;i<=d;i++)
      { 
      factor=factor*i;
      }
     sum= sum +factor;
    }
   if(sum==a)
   printf("yes");
   else 
   printf("no");


    return 0;
}