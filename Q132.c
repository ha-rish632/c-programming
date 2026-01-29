#include<stdio.h>
int main(){
    int n;
   int digit;
  int  decimal=0;
  int power=1;
  scanf("%d",&n);
  for(;n>0;n=n/10){
    digit =n%10;
    decimal = decimal +(digit*power);
    power = power*2;
    
  }
  printf("%d",decimal);
  return 0;

}