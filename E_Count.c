#include <stdio.h>
#include <string.h>
int main()
{
    char n[1000001];
    scanf("%s", n);
    int s = 0;
    for (int i = 0; i < strlen(n); i++)
    {
        s = s + (n[i] - '0');
    }
    printf("%d", s);
    return 0;
}