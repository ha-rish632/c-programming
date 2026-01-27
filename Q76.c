#include <stdio.h>

int main()
{
    int at;
    int b;
    int wa;

    printf("Enter the account type : ");
    scanf("%d", &at);

    printf("Enter the balance: ");
    scanf("%d", &b);

    printf("Enter the withdraw amount: ");
    scanf("%d", &wa);

    switch (at)
    {
    case 1:
    if (b >= wa)
     printf("Transaction Successful");
    break;
    case 2:
    if (wa<=4999)
    printf("Transaction Successful");
    else
    printf( "Transaction faill \ndaly limit is 4999  ");
    break;

    default:
    printf("Invalid Account Type");
    }

    return 0;
}
