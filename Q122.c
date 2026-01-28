#include<stdio.h>

int main ()
{
  int a ,m,n1=0,n2=1;
  scanf("%d",&a);
  if(a<=0){
    printf("invalid input");
  }
  
  for ( int i=0; i<a; i++){
    
     printf("%d",n1);
       m=n1+n2;
       n1=n2;
       n2=m;
    }
    return 0;
}