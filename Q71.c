#include <stdio.h>

int main()
{
    int day ;
    scanf("%d",&day);

    switch (day)
    {
        case 1:
            printf("monday " );
            break;
        case 2:
            printf(" tuesday");
            break;
        case 3:
            printf(" wednsday" );
            break;
        case 4:
            printf(" tursday");
              
            break;
        case 5:
            printf(" friday");
            break;
        case 6:
            printf(" saturday"); 
            break;
        default:
            printf("sunday\n");
            break;
    }

    return 0;
}
