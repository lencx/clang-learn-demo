#include <stdio.h>

int isPrime(int i)
{
    if (i<2)
        return 0;

    int prime = 1;
    for(int j=2; j<=i/2; j++) {
        if(i%j==0) {
            prime = 0;
            break;
        }
    }
    return prime;
}

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        if(isPrime(i)) {
            printf("%d, ", i);
        }
    }
}

