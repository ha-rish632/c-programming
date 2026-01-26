#include <stdio.h>

int main()
{
    char input;
    printf("Enter a character: ");
    scanf("%c",&input);
    if(input>=65&&input<=90){
        printf("Upper case\n");
    }else if((input>=97&&input<=122)){
        printf("Lower case\n");
    }else{
        printf("Invalid input\n");
    }
    return 0;
}
