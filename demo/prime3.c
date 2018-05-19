#include <stdio.h>
#include <math.h>

int isPrime(int x);
int isPrime2(int x, int knownPrimes[], int numberOfKnownPrimes);

int main()
{
    for(int i = 0; i < 100; i++) {
        if(isPrime(i))
            printf("%d, ", i);
    }

    printf("\n ================\n");

    const int number = 10;
    int prime[number] = {2};
    int count = 1;
    int i = 3;

    { // Debug#tableHead
        printf("\t\t\t");
        for(int i = 0; i < number; i++) {
            printf("%d\t", i);
        }
        printf("\n");
    }
    while (count < number) {
        if(isPrime2(i, prime, count))
            prime[count++] = i;
        
        { // Debug#tableBody
            printf("i=%d\t count=%d\t", i, count);
            for(int i = 0; i < number; i++) {
                printf("%d\t", prime[i]);
            }
            printf("\n");
        }

        i++;
    }

    for(int i = 0; i < number; i++) {
        printf("%d", prime[i]);
        (i + 1) % 24
            ? printf("\t")
            : printf("\n");
    }
    return 0;
}

int isPrime(int x)
{
    int isPrime = 1;
    if(x == 1 || (x % 2 == 0 && x != 2))
        isPrime = 0;
    
    for(int i = 3; i <= sqrt(x); i += 2) {
        if(x % i == 0) {
            isPrime = 0;
            break;
        }
    }

    return isPrime;
}

int isPrime2(int x, int knownPrimes[], int numberOfKnownPrimes)
{
    int isPrime = 1;
    for(int i = 0; i < numberOfKnownPrimes; i++) {
        if (x % knownPrimes[i] == 0) {
            isPrime = 0;
            break;
        }
    }

    return isPrime;
}
