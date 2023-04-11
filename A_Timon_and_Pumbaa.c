#include <stdio.h>
int main()
{

    int n, i;

    scanf("%d %d", &n, &i);
    int sum = n - i;
    if (sum >= 0)
    {
        printf("%d", sum);
    }
    else
    {
        printf("0");
    }
    return 0;
}
