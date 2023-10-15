#include <stdio.h>

int main()
{
    float c, f;

    printf("Enter ther value of f : ");
    scanf("%f", &f);

    c = (f - 32) * (5.0 / 9.0);

    printf("Celsius = %f", c);

    return 0;
}