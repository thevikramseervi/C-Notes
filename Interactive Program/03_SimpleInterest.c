#include <stdio.h>

int main()
{
    float p, r, t, SI;

    printf("Enter the value of p, r, t :\n");
    scanf("%f %f %f", &p, &r, &t);

    SI = (p * r * t) / 100;

    printf("SI = %f", SI);

    return 0;
}