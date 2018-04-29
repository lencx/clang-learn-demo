#include <stdio.h>

int main()
{
    const int MINOR = 20;

    int age = 0;
    
    printf("请输入你的年龄: ");
    scanf("%d", &age);

    if(age < MINOR) {
        printf("年轻是美好的，");
    }

    printf("年龄决定了你的精神世界，请好好珍惜！\n");

    return 0;
}