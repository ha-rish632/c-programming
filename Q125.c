#include<stdio.h>
 int main ()
 {
    int a,b;
    scanf("%d %d",&a,&b);
    int sum=0;
    int mul =1;
    for( int i=1; i<=b;i++){

        mul = a*i;
        if(mul<=b){
            sum += mul;
        }
    }

     
    printf("%d",sum);
}