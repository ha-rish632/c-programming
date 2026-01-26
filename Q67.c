#include<stdio.h>
int main ()
{
    int a,s,d;
    printf("enter the unit:");
    scanf("%d",&a,&s,&d);
    s=a*5;
    d=a*7;
    if  (a<=120){
    printf("Bill ammount is:%d",s);
    }else if(a>120){
        printf("bill ammount is:%d",d);
    }else{
        printf("invalid output");
    }
    return 0;
}