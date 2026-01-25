#include <stdio.h>
int main()
{
    int x = 5;
    int y = 10;
     int c= ((x <0) && (y < 0) || (x < 0) && (y <0));
    {
        printf("%d",c);
    }
    return 0;
}
