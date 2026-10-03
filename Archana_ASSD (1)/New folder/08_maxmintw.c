#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    if(a > b)
    {
        printf("Maximum = %d\n", a);
        printf("Minimum = %d", b);
    }
    else
    {
        printf("Maximum = %d\n", b);
        printf("Minimum = %d", a);
    }

    return 0;
}
