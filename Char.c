#include <stdio.h>
int main()
{
    char a;
    scanf("%c", &a);
    if (a >= 65 && a <= 90)
    {
        int sum = a + 32;
        printf("%c", sum);
    }
    else if (a >= 97 && a <= 122)
    {
        int sum = a - 32;
        printf("%c", sum);
    }

    return 0;
}