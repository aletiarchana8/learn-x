#include <stdio.h>

int main()
{
    float r, l, b;

    scanf("%f", &r);
    printf("Circle Area = %.2f\n", 3.14*r*r);
    printf("Circle Perimeter = %.2f\n", 2*3.14*r);

    scanf("%f %f", &l, &b);
    printf("Rectangle Area = %.2f\n", l*b);
    printf("Rectangle Perimeter = %.2f\n", 2*(l+b));

    return 0;
}
