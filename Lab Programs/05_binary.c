#include <stdio.h>
int main()
{
    int a[20], n, i, key, found = 0, high, mid, low;
    printf("Enter the size of array\n");
    scanf("%d", &n);
    printf("Enter the elements of array\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter the key to search\n");
    scanf("%d", &key);
    high = n - 1;
    low = 0;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (a[mid] == key)
        {
            found = 1;
            break;
        }
        else if (a[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    if (found == 1)
        printf("key found at position %d\n", mid + 1);
    else
        printf("key not found\n");
    return 0;
}