#include <stdio.h>

int main()
{
    const double NUM = 0.3048;
    double foot;
    double inch;

    scanf("%lf %lf", &foot, &inch);
    printf("%f\n", ((foot + inch/12)*NUM));

    return 0;
}