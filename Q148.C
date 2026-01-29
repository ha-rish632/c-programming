#include <stdio.h>
int main ()
{
  int i,j,m,h;
    
   for(i=1;i<=4;i++){
     for(j=1;j<=i;j++)
        printf("%d",j);
     for(m=1;m<=4-i;m++){
     printf("  ");
   }
   for(h=i;h>=1;h--)  {
    printf("%d",h);
   }
      
       printf("\n");
   }

    return 0;
}