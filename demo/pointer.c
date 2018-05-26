#include <stdio.h>

int main()
{
    int a = 5;
    int p;
    p = (int)&a;
    printf("sizeof(int)=%ld\n", sizeof(int));
    printf("sizeof(double)=%ld\n", sizeof(double));
    printf("sizeof(a)=%ld\n", sizeof(a));

    printf("%x\n", p);
    printf("%p\n", &a);
    printf("%lu\n", sizeof(int)); // 4
    printf("%lu\n", sizeof(&a)); // 8

    printf("=================\n");

    int b;
    int c;
    printf("&b=%p\n", &b);
    printf("&c=%p\n", &c);

    printf("=================\n");

    int arr[5];

    printf("%p\n", &arr);
    printf("%p\n", arr);
    printf("%p\n", &arr[0]);
    printf("%p\n", &arr[1]);

    return 0;
}