#include <stdio.h>

int main()
{
    float pi = 3.14, r, area;

    printf("Enter the value of r : ");
    scanf("%f", &r);

    area = pi * r * r;

    printf("Area Of Circle = %f", area);

    return 0;
}