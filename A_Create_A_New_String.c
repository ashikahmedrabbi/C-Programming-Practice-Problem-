#include <stdio.h>
#include <string.h>
int main()
{
    char n[1000], m[1000];
    gets(n);
    gets(m);

    int x = strlen(n);
    int y = strlen(m);
    printf("%d %d\n", x, y);
    printf("%s %s", n, m);
    return 0;
}