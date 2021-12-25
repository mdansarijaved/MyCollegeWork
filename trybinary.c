// Binary example and How to find if  a number is repeated in given array and its location
#include <stdio.h>
int main()
{
    int a[10], i, number, n, first, last, mid;
    printf("Enter the number of elements ::");
    scanf("%d", &n);
    printf("Enter the elements::");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the number to search ");
    scanf("%d", &number);
    first = 0;
    last = n - 1;
    while (first <= last)
    {
        mid = (first + last) / 2;
        if (a[mid] == number)
        {
            printf("location=arr[%d]", mid);
            break;
        }
        else if (a[mid] > number)
        {
            last = mid - 1;
        }
        else
        {
            first = mid + 1;
        }
        if (first > last)
        {
            printf("notfound");
        }
    }
}