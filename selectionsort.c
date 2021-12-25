// This is an example of selectionsort
#include <stdio.h>
int main()
{
    int a[100], i, j, swap, max, n;
    printf("number of element ");
    scanf("%d", &n);
    printf("Enter the element ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        max = i;
        for (int j = i+1; j < n; j++)
        {
            if (a[max] > a[j])
            {
                max = j;

                if (max != i)
                {
                    swap = a[i];
                    a[i] = a[max];
                    a[max] = swap;
                }
            }
        }
    }
    printf("array:");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", a[i]);
    }
}