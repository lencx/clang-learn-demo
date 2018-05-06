#include <stdio.h>

//  f(x) = 1 - 1/2 + 1/3 -1/4 + ... + 1/x
int main()
{
    int n;
    scanf("%d", &n);
    double sum = 0.0;
    double sign = 1.0;

    for(int i=1; i<=n; i++) {
        sum += sign/i;
        sign = -sign;
    }

    printf("f(%d) = %f\n", n, sum);

    return 0;
}