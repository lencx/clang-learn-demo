#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    int isPrime = 1;

    for(int i=2; i<=num/2; i++) {
        if(num % i == 0) {
            isPrime = 0;
            break;
        }
    }

    isPrime
        ? printf("%d is a prime number\n", num)
        : printf("%d is not a prime number\n", num);

    return 0;
}