#include <stdio.h>

int main()
{
    int num, num2, sum;
    printf("Of which number's table you want?: ");

    do
    {
        scanf("%d", &num);
        if (num == 0)
        {
            printf("exiting...");
            break;
        }

        for (num2 = 1; num2 <= 10; num2++)
        {
            printf("%d X %d = %d\n", num, num2, sum = num * num2);
        }
    } while (num != 0);

    return 0;
}