#include <stdio.h>

int main()
{
    int a = 813;
    int n1 = a/100;
    // int n2 = a%100/10;
    int n2 = a/10%10;
    int n3 = a%10;

    printf("%d %d %d\n", n1, n2, n3);
    printf("%d\n", n3*100 + n2*10 + n1);

    return 0;
}