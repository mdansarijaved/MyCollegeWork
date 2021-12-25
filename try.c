// WAP to search an element in array
#include <stdio.h>
int main()
{
    int arr[10],i, n, m;
    int found;
    printf("Enter the number of elements ");
    scanf("%d", &m);
    printf("Enter the elements ");
    for ( int i = 0;i < m;i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to find ");
    scanf("%d", &n);
    for (int i = 0; i< m;i++)
    {
        if (arr[i] == n)
        {
            printf("a[%d]", i);
            found = 1;
        }
    }
    if (found != 1)
        printf("not found");
}