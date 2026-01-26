#include <stdio.h>

int main()
{
    int mon ;
    scanf("%d",&mon);

    switch (mon)
    {
        case 1:
            printf("31 days" );
            break;
        case 2:
            printf(" 28 or 29 days");
            break;
        case 3:
            printf(" 31days" );
            break;
        case 4:
            printf(" 30 days");
              
            break;
        case 5:
            printf(" 31 days");
            break;
        case 6:
            printf(" 30 days"); 
            break;
        default:
            printf("invalid input");
            break;
    }

    return 0;
}
