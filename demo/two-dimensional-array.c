#include <stdio.h>

int main()
{
    int arr[][5] = {
        // {1, 3, 5, 7, 9},
        // {2, 4, 6, 8, 10},
        1, 3, 5, 7, 9,
        2, 4, 6, 8, 10
    };

    int len = sizeof(arr) / sizeof(arr[0]);
    int len2 = sizeof(arr[0]) / sizeof(arr[0][0]);

    printf("len: %d; len2: %d\n", len, len2);

    for(int i = 0; i < len; i++) {
        for(int j = 0; j < len2; j++) {
            printf("%d\n", arr[i][j]);
        }
    }

    return 0;
}