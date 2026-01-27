#include <stdio.h>

int main() {
    int connectionType, un;
    int bill = 0;

    scanf("%d", &connectionType);
    scanf("%d", &un);
    switch (connectionType) {
        case 1:
            if (un<= 100) {
                bill = un * 3;
                printf("Bill:%d", bill);
            } else {
                bill = (100*3) +((un- 100) * 5);
                bill=bill-80;
                printf("Bill:%d",bill);
            }
            
            break;
        case 2: 
            if (un<= 100) {
                bill = un *7;
                printf("Bill:%d",bill);
            } else {
                bill = (100*7) + ((un - 100) * 10);
                printf("Bill:%d",bill);
            }
            break;

        default:
            printf("Invalid");
            return 0;
    }
    return 0;
}