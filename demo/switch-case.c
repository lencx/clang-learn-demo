#include <stdio.h>

int main()
{
    int num = 0;

    printf("Please enter: ");
    scanf("%d", &num);

    switch (num) {
        case 1:
            printf("Good morning\n");
            break;
        case 2:
            printf("Good afternoon\n");
            break;
        case 3:
            printf("Good evening\n");
            break;
        default:
            printf("Hello\n");
    }

    return 0;
}