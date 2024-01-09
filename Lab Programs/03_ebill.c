#include <stdio.h>
int main()
{
    char name[20];
    int units;
    float charges;
    printf("enter the name of the user and units consumed\n");
    scanf("%s %d", &name, &units);
    if (units <= 200)
        charges = units * 0.80;
    else if (units <= 300)
        charges = 200 * 0.80 + (units - 200) * 0.90;
    else
        charges = 200 * 0.80 + 100 * 0.90 + (units - 300) * 1.0;
    charges = charges + 100;
    if (charges > 400)
        charges = charges + 0.15 * charges;
    printf("%s has to pay rupees %f\n", name, charges);
}