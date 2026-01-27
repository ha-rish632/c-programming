#include <stdio.h>
int main ()
{
  int pt;
  printf("Enter the plan type:");
  scanf("%d",&pt);
  int ct;
  printf("Enter case type (1=UPI, 2=Card, ): ");
  scanf("%d", &ct);

  switch(pt)
    {
      case 199:
      if(ct== 1|| ct==2) {
      printf("%d",199-20);
      }else{
      printf("%d",199);
      }
      break;

      case 399:
      if(ct== 1|| ct==2){
       printf("%d",399-20);
      }else{
       printf("%d",399);
      }
       break;

    }

    return 0;
}