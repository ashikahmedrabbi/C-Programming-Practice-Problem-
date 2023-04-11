#include <stdio.h>
int main()
{

    int n;

    scanf("%d", &n);
    int SUM = n % 10;
    int a = n / 10;
    if (SUM % a == 0 || a % SUM == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
