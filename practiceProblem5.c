#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n > 1000)
    {
        printf("I will buy Punjabi\n");
        int sub = 1000 - n;
        if (500 <= sub)
        {
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes\n");
        }
    }
    else
    {
        printf("Bad luck!");
    }

    return 0;
}