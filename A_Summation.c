#include <stdio.h>
int main()
{
    int n;
    long long int sum = 0;
    scanf("%d ", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum = (sum + a[i]);
    }
    if (sum > 0)
    {
        printf("%lld", sum);
    }
    else
    {
        long long int sum2 = sum * -1;
        printf("%lld", sum2);
    }

    return 0;
}
