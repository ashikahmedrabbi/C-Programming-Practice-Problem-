#include <stdio.h>
#include <limits.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int mm = INT_MAX, p;
    for (i = 0; i < n; i++)
    {
        if (a[i] < mm)

        {
            mm = a[i];
            p = i + 1;
        }
    }
    printf("%d %d\n", mm, p);
    return 0;
}