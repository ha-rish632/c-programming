#include <stdio.h>
int main (){
    int a;
    int sum=0;
    scanf("%d",&a);
    for (int i=1; i<=a/2;i++)
     if(a%i==0)
        sum +=i;

    if(sum==a && a!=0)
      printf("yes");
    else 
      printf("no");
      return 0;  
}