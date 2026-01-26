# include <stdio.h>
int main ()
{
    int a;
    printf("Enter the value of a:");
    scanf("%d",&a);
    if(a>0){
        printf("it is positive:%d",a);
    }
    else if(a<0){
        printf("it is negative:%d",a);

    }else{
        printf("it is zero:%d",a);
    
    }
    return 0;
}
