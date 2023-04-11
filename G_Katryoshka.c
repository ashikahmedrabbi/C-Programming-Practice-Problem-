#include <stdio.h>
int main()
{
    long long int a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);
    long long int sum, sum2, sum3, sum4;
    if (a >= b && c >= b)
    {
        sum = b;
        sum2 = a - sum;
        sum3 = c - sum;
        sum4 = sum2 / 2;

        if (sum4 <= sum3)
        {
            long long int sum5 = sum + sum4;
            printf("%lld", sum5);
        }
        else
        {
            long long int sum5 = sum + sum3;
            printf("%lld", sum5);
        }
    }
    else if (a <= b && a <= c)
    {
        sum = a;
        printf("%lld", sum);
    }
    else if (c <= b && c <= a)
    {
        sum = c;
        printf("%lld", sum);
    }

    return 0;
}