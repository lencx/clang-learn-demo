#include <stdio.h>

int main()
{
    int arr[10];
    int n, cnt = 0;
    scanf("%d", &n);

    double sum = 0;

    while (n != -1 && cnt > 9) {
        arr[cnt] = n;
        {
            printf("%d", cnt);
            for (int i = 0; i < cnt; i++) {
                printf("%d ", arr[i]);
            }
            printf("\n");
        }
        sum += n;
        cnt++;
        scanf("%d", &n);
    }

    if(cnt > 0) {
        printf("average: %f\n", sum/cnt);
        for(int i = 0; i < cnt; i++) {
            if(arr[i] > sum/cnt) {
                printf("%d, ", arr[i]);
            }
        }
    }

    return 0;
}