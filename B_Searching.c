#include <stdio.h>
int main()
{
    int x, z = -1, y, i;
    scanf("%d", &x);
    int a[x];
    for (i = 0; i < x; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &y);
    for (i = 0; i < x; i++)
    {
        if (a[i] == y)
        {
            z = i;

            break;
        }
    }
    printf("%d", z);
    return 0;
}