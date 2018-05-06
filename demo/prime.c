#include <stdio.h>

int main()
{
    const int NUM = 1000;
    int n = 0;

    while (n < NUM) {
        int isPrime = 1;
        for(int j=2; j<=n/2; j++) {
            if(n%j == 0) {
                isPrime = 0;
                break;
            }
        }

        if(isPrime)
            printf("%d, ", n);
        n++;
    }

    printf("\n");

    return 0;
}