#include <stdio.h>
int main()
{
    int n, i;
    int sum = 0, sum2 = 0;
    scanf("%d ", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0)
        {
            sum = (sum + a[i]);
        }
        else
        {
            sum2 = (sum2 + a[i]);
                }
    }
    printf("%d %d", sum, sum2);
    return 0;
}
