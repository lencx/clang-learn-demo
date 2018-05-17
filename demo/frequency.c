#include <stdio.h>

int main()
{
    const int SIZE = 10;
    int arr[SIZE] = {0};
    int x;
    // int len = sizeof(arr) / sizeof(arr[0]);
    scanf("%d", &x);
    while( x > -1) {
        if(x >= 0 && x <= 9) {
            arr[x]++;
        } 
        scanf("%d", &x);
    }

    for(int i = 0; i < SIZE; i++) {
        printf("%d: %d\n", i, arr[i]);
    }

    return 0;
}