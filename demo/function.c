#include <stdio.h>

void hello(void);
void f(void);

int main()
{
    hello();
    f();

    return 0;
}

void hello()
{
    printf("Hello world\n");
}

void f()
{
    int a[10];
    // a[11] = 0;
}