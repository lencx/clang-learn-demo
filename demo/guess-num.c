#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int number = rand()%100+1;
    int count = 0;
    int n = 0;

    printf("A random number of 1-100 has been generated\n");

    do {
        printf("Please guess this number: ");
        scanf("%d", &n);
        count++;

        if(n > number)
            printf("Too big!\n");
        else if (n < number)
            printf("Too small!\n");
        else
            printf("Guess right!\n");
    } while (n != number);

    if (count < 4)
        printf("Great, you only used %d times!\n", count);
    else
        printf("Not bad, you used %d times!\n", count);

    return 0;
}