#include <stdio.h>
int main()
{
    int a[20], i, j, n, temp;
    printf("enter the size of array\n");
    scanf("%d", &n);
    printf("Enter the elements\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n - 1; i++)
    {   for (j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("sorted elements are\n");
    for (i = 0; i < n; i++)
        printf("%d\t", a[i]);
    printf("\n");
    return 0;
}