#include <stdio.h>

int main()
{
    const int maxNumber = 1000;
    int isPrime[maxNumber];
    int i;
    for(i = 0; i < maxNumber; i++) {
        isPrime[i] = 1;
    }

    for(int x = 2; x < maxNumber; x++) {
        if(isPrime[x]) {
            for(i = 2; i * x < maxNumber; i++) {
                isPrime[i*x] = 0;
            }
        }
    }

    for(i = 2; i < maxNumber; i++) {
        if(isPrime[i]) {
            printf("%d, ", i);
        }
    }
    printf("\n");

    return 0;
}