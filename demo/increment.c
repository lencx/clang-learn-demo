#include <stdio.h>

int main()
{
    int a = 10;

    printf("a++= %d\n", a++); // 10
    printf("a: %d\n", a); // 11

    printf("++a= %d\n", ++a); // 12
    printf("a: %d\n", a); // 12

    return 0;
}