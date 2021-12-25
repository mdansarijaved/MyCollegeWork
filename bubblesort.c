// This code will print the array in decending order 
#include <stdio.h>
int main()
{
    int a[100], i, j, swap, n;
    printf("Enter the no of element ");
    scanf("%d", &n);
    printf("\nEnter the element of array :");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] < a[j - 1])
            {
                swap = a[j];
                a[j] = a[j + 1];
                a[j + 1] = swap;
            }
        }
    }
    printf("array is :");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", a[i]);
    }
}