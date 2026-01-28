#include <stdio.h>

int main() {
    int n,i,j,count = 0;
    scanf("%d", &n);
    int factor;

    for(i=2;i<=n;i++){
    factor=0;
     for (j=1;j<=i;j++){
        if(i%j==0){
         factor++;
     }
   }
    if(factor==2){
        count++; 
      } 
  }
       printf("%d",count);
    return 0;
}
