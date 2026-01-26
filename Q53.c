#include<stdio.h>
int main ()
{
    int a,b;
    printf("Enter the two number:");
    scanf("%d %d",&a,&b);
    if (a>b){
        printf("a(%d ) is a greatest number",a);

    }else{
        printf("b (%d)is a greatest number",b);
    }


    return 0;
}