// How to multiply two matrices
#include <stdio.h>
int main()
{
    int a[100][100], b[100][100];
    int mult[100][100];
    int i, j, k, m, n, p, q, sum =0;
    printf("Enter the no of element in 1st array ");
    scanf("%d%d", &m, &n);
    printf("Enter the element in 1st array ");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the no of elemet in 2nd array ");
    scanf("%d%d", &p, &q);

    if (n != p)
    {
        printf("product not exist");
    }
    else
    {
        printf("Enter the element in 2nd array ");
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }
        printf("The product is ::");
        for ( i = 0; i < m; i++)
        {
            for ( j = 0; j < q; j++)
            {
                for ( k= 0; k < p; k++)
                {
                    sum=sum+a[i][k]*b[k][j];
                }
                mult[i][j]=sum;
                    sum=0;
                    
            }
        }
        for ( i = 0; i < m; i++)
        {
            for ( j = 0; j < q; j++)
            {
                printf("%d\t", mult[i][j]);
            }
            printf("\n");
        }
     
    }
    
}