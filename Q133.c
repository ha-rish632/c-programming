#include<stdio.h>
int main(){
    int n,count =0;
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        int div = 0;

    for(int j=1;j<=i;j++){
        if(i%j==0){
            div++;
        }
    }
    if(div==2){
        count++;
    }
    }
    printf("%d",count);
    return 0;
}