/* Greatest common divisor
辗转相除法:
① 如果b等于0，计算结束，a就是最大公约数；
② 否则，计算a除以b的余数，让a等于b，而b等于该余数；
③ 回到①

a    b    t
12   18   12
18   12   6
12   6    0
6    0
*/

#include <stdio.h>
int main()
{
    int a, b;
    int t;
    scanf("%d", &a);
    scanf("%d", &b);

    while (b!=0) {
        t = a%b;
        a = b;
        b = t;
        printf("a=%d, b=%d, t=%d\n", a, b, t);
    }

    printf("gcd=%d\n", a);

    return 0;
}