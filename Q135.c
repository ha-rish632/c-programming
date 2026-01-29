#include<stdio.h>
int main(){
    int n,rev=0,temp;
    scanf("%d",&n);
    temp=n;
    for(;n!=0;n=n/10){
        int digits = n % 10;
        rev = rev*10 + digits;
    }
    if(temp==rev){
        printf("palindrome");
    }else{
        printf("not palindrome");
    }
return 0;
}