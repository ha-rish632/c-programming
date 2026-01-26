#include<stdio.h>
int main ()
{
    int mark;
    printf("Enter the mark:");
     scanf("%d",&mark);
    if(mark>=90){

        printf("grade a(%d)",mark);
    }
    else if(mark>=80){
        printf("grade b(%d)",mark);
    }else if( mark>=70){
        printf("grade c(%d)",mark);
    }else if (mark>=60){
        printf("grade d (%d)",mark);
    }else {
        printf("faill");
    }


    return 0;
}
