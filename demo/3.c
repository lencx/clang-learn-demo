#include <stdio.h>

int main()
{
    int price = 0;
    int bill = 0;

    printf("请输入金额: ");
    scanf("%d", &price);
    printf("请输入票面: ");
    scanf("%d", &bill);

    int money = bill - price;

    if (bill >= price)
        printf("找你%d\n", money);
    else
        printf("你还差%d\n", -money);
    return 0;
}