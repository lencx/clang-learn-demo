#include <stdio.h>

int main()
{
    int num, count = 0;
    printf("Please enter a positive integer: ");
    scanf("%d", &num);

    if(num < 0) 
        num = -num;

    // if (num == 0) {
    //     num /= 10;
    //     count++;
    // }

    // while (num > 0) {
    //     count++;
    //     num /= 10;
    //     // printf("num=%d, count=%d\n", num, count);
    // }

    do {
        num /= 10;
        count++;
    } while (num > 0);

    printf("The number of positive integer is: %d\n", count);

    return 0;
}