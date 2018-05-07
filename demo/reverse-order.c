#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    do {
        int a = n%10;
        printf("%d", a);
        if(n>9)
            printf(" ");
        n /= 10;
    } while (n > 0);

    printf("\n");

    return 0;
}