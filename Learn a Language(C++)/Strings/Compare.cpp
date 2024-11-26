#include <stdio.h>
#include <string.h>

int main()
{
    char x[100], y[100];
    scanf("%s", x);
    scanf("%s", y);

    if (strcmp(x, y) < 0)
    {
        printf("%s\n", x);
    }
    else
    {
        printf("%s\n", y);
    }

    return 0;
}