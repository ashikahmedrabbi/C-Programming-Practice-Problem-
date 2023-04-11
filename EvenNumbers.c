#include <stdio.h>
int main()
{
    int a, i;
    int b = -1;
    scanf("%d", &a);

    for (i = 1; i <= a; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
        else if (a == 1)
        {
            printf("%d\n", b);
        }
    }

    return 0;
}