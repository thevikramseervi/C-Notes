#include <stdio.h>

int main()
{
    int a, b, sum;

    printf("Enter the value of a : ");
    scanf("%d", &a);

    printf("Enter the value of b : ");
    scanf("%d", &b);

    sum = a + b;

    printf("Sum of a and b = %d", sum);

    return 0;
}