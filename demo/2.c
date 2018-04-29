#include <stdio.h>

int main()
{
    printf("%d\n", 4 < 5); // 1
    printf("%d\n", 4 > 5); // 0
    printf("%d\n", 4 == 4); // 1

    int a = 3 > 2 + 4;
    printf("%d\n", a); // 0

    printf("%d\n", 5 > 2 == 3 < 4); // 1
    // 6>5 => 1; 1>4 => 0
    printf("%d\n", 6 > 5 > 4); // 0

    return 0;
}