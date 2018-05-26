#include <stdio.h>

void f(int *p);

int main()
{
    int a = 5;
    int* p = &a;

    printf("%d\n", *p);
    printf("%p\n", &a);
    f(&a);

    int b[] = {1, 2, 3, 4, 5};

    printf("p[0]=%d\n", p[0]);

    // int arr[] --> int * const arr;
    int arr[] = {10, 20, 30};
    printf("*arr=%d\n", *arr); // 10

    return 0;
}

void f(int *p)
{
    printf("%p\n", p);
}