#include <stdio.h>

int main()
{
    // 13456/10000 = 1
        // 13456%10000 = 3456
    // 3456/1000 = 3
        // 3456%1000 = 456
    
    int num;
    scanf("%d", &num);
    int t = num;
    int mask = 1;
    while (t > 9) {
        t /= 10;
        mask *= 10;
        // printf("t=%d", t);
    }
    // printf("mask=%d", mask);

    do {
        int n = num/mask;
        num %= mask;
        mask /= 10;
        printf("%d", n);
        mask > 0 ? printf(" ") : printf("\n");
    } while (mask > 0);

    return 0;
}