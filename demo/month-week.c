#include <stdio.h>

int main()
{
    int type, num;
    printf("Please enter the type[1(month), 2(weeks)]: ");
    scanf("%d", &type);

    printf("Please enter the number: ");
    scanf("%d", &num);

    switch (type) {
        case 1:
            switch (num) {
                case 1: printf("January\n"); break;
                case 2: printf("February\n"); break;
                case 3: printf("March\n"); break;
                case 4: printf("April\n"); break;
                case 5: printf("May\n"); break;
                case 6: printf("June\n"); break;
                case 7: printf("July\n"); break;
                case 8: printf("August\n"); break;
                case 9: printf("September\n"); break;
                case 10: printf("October\n"); break;
                case 11: printf("November\n"); break;
                case 12: printf("December\n"); break;
                default: printf("Month entered incorrect!\n");
            }
            break;
        case 2:
            switch (num) {
                case 1: printf("Monday\n"); break;
                case 2: printf("Tuesday\n"); break;
                case 3: printf("Wednesday\n"); break;
                case 4: printf("Thursday\n"); break;
                case 5: printf("Friday\n"); break;
                case 6: printf("Saturday\n"); break;
                case 7: printf("Sunday\n"); break;
                default: printf("Weeks entered incorrect!\n");
            }
            break;
        default: printf("Type entered incorrect!\n");
    }

    return 0;
}