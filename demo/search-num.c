#include <stdio.h>

int search(int key, int arr[], int len);

int main(void)
{
    int a[] = {3, 23, 19, 32, 14, 4, 9, 38, 41, 27, 13};
    int len = sizeof(a) / sizeof(a[0]);
    int loc = search(23, a, len);
    loc != -1 ? printf("exist\n") : printf("does not exist\n");
    return 0;
}

int search(int key, int arr[], int len) {
    int loc = -1;

    for (int i = 0; i < len; i++) {
        if(key == arr[i]) {
            loc = i;
            break;
        }
    }

    return loc;
}
