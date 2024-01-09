#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a, b, c, d, root1, root2, real, imag;
    printf("Enter the value of a,b,c\n");
    scanf("%f %f %f", &a, &b, &c);
    if (a == 0)
    {
        printf("Invalid coefficients\n");
        exit(0);
    }
    d = b * b - 4 * a * c;
    if (d == 0)
    {
        printf("the roots are real and equal\n");
        root1 = -b / (2 * a);
        root2 = -b / (2 * a);
        printf("root1 = %f\nroot2 = %f\n", root1, root2);
    }
    else if (d > 0)
    {
        printf("The roots are real and distinct\n");
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        printf("root1 = %f\nroot2 = %f\n", root1, root2);
    }
    else
    {
        printf("The roots are imaginary\n");
        real = -b / (2 * a);
        imag = sqrt(-d) / (2 * a);
        printf("root1 = %f + i %f\nroot2 = %f - i %f\n", real, imag, real, imag);
    }
    return 0;
}