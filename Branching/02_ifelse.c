// Greateset of two numbers using if else

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the value of a and b : ");
    scanf("%d %d", &a, &b);
    if (a > b)
        printf("a=%d is greatest", a);
    else
        printf("b=%d is greatest", b);
    return 0;
}