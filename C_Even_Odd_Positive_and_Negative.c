#include <stdio.h>
int main()
{
    int a, b, i, sum1 = 0, sum2 = 0, sum3 = 0, sum = 0;
    scanf("%d", &a);
    for (i = 0; i < a; i++)
    {
        scanf("%d", &b);
        if (b >= 0)
        {
            sum1 = sum1 + b;

            if (b % 2 == 0)
            {
                sum2 = sum2 + b;
            }
            else
            {
                sum3 = sum3 + b;
            }
        }
        else
        {
            sum = sum + b;
        }
    }
    printf("Even %d\n Odd %d\n Positive %d\nNegative %d\n", sum2, sum3, sum1, sum);
    return 0;
}
