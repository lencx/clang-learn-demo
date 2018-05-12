#include <stdio.h>

// void sum(int, int); // declaration
void sum(int begin, int end); // declaration
void cheer(int n);

int main()
{
    sum(1, 10);
    sum(20, 30);
    sum(1, 100);

    double a = 3.4;
    cheer(a);

    return 0;
}

void sum(int begin, int end)
{
    int sum = 0;
    for (int i = begin; i <= end; i++) {
        sum += i;
    }

    printf("The sum of %d to %d is %d\n", begin, end, sum);
}


void cheer(int n)
{
    printf("%d\n", n);
}