#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    int fact = 1;

    // int i = 1;
    // while (i <= num) {
    //     fact *= i;
    //     i++;
    // }

    // for(int i=2; i<=num; i++) {
    //     fact *= i;
    // }

    int n = num;
    for (; num>=2; num--) {
        fact *= num;
    } 

    printf("%d! = %d\n", n, fact);

    return 0;
}