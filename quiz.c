#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int sum, sum2, sum3, sum4;
    if (a >= b && c >= b)
    {
        sum = b;
        sum2 = a - sum;
        sum3 = c - sum;
        sum4 = sum2 / 2;
        if (sum4 <= sum3)
        {
            int sum5 = sum + sum4;
            printf("%d", sum5);
        }
        // printf("%d", sum);
    }
    else if (a <= b && a <= c)
    {
        sum = a;
        // printf("%d", sum);
    }
    else if (c <= b && c <= a)
    {
        sum = c;
        // printf("%d", sum);
    }
    // int sum2 = sum - 1;
    // printf("%d", sum2);
    return 0;
}