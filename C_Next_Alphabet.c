#include <stdio.h>
int main()
{
    char a;
    scanf("%c", &a);
    if (a >= 65 && a <= 89 || a >= 97 && a <= 121)
    {
        int sum = a + 1;
        printf("%c", sum);
    }
    else if (a == 90 || a == 122)
    {
        int sum = a - 25;
        printf("%c", sum);
    }
    else
    {
        printf("Invalid");
    }

    return 0;
}