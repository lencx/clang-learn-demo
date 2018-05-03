#include <stdio.h>

int main()
{
    int x;
    printf("Please enter a positive integer: ");
    scanf("%d", &x);

    int digit;
    int ret = 0;

    if (x > 0) {
        while (x > 0) {
            digit = x%10;
            ret = ret*10+digit;
            x /= 10;
            // printf("dight: %d\n", digit);
            // printf("ret: %d\n", ret);
        }
        printf("reverse order is: %d\n", ret);
    }
    else
        printf("This number is invalid!\n");

    return 0;
}