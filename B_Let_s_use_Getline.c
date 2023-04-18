#include <stdio.h>
int main()
{
    char n[1000000];
    gets(n);
    for (int i = 0; n[i] != '\\'; i++)
        printf("%c", n[i]);
    return 0;
}