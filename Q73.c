#include <stdio.h>

int main()
{
    char a;
    printf("Enter a character: ");
    scanf(" %c", &a);

    switch (a)
    {
        case 'A':
        case 'a':
            printf("Vowel\n");
            break;

        case 'E':
        case 'e':
            printf("Vowel\n");
            break;

        case 'I':
        case 'i':
            printf("Vowel\n");
            break;

        case 'O':
        case 'o':
            printf("Vowel\n");
            break;

        case 'U':
        case 'u':
            printf("Vowel\n");
            break;

        default:
            printf("Invalid input!\n");
    }

    return 0;
}
