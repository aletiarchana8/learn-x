#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if(a > b && a > c)
        printf("Maximum = %d\n", a);
    else if(b > c)
        printf("Maximum = %d\n", b);
    else
        printf("Maximum = %d\n", c);

    if(a < b && a < c)
        printf("Minimum = %d", a);
    else if(b < c)
        printf("Minimum = %d", b);
    else
        printf("Minimum = %d", c);

    return 0;
}
