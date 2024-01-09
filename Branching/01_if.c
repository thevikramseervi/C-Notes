// Eligible to vote or not using simple if

#include <stdio.h>

int main()
{
    int age;
    printf("Enter age : ");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("Eligible to vote");
    }
    if (age < 18)
    {
        printf("Not Eligible to vote");
    }
    return 0;
}