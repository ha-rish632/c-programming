#include<stdio.h>
int main ()
{
    int a;
  printf("enter the type of flat:");
  scanf("%d",&a);
  int b;
  printf("enter the units:");
  scanf(" %d",&b);
  switch(a)
{
    case 1:
      if(b<=30)
      printf("%d",b*5);
      else if(b>30)
      printf("%d",(30 * 5) + ((b- 30) * 8));
      break;
      case  2:
        printf("%d",b*10);
        break;

}


  return 0;
}