// This is code is to perform array multiplication 
#include <stdio.h>
int main()
{
  int a[100][100], b[100][100], multiply[100][100];
  int i, j, k, m, n, p, q, sum = 0;
  printf("enter no of elements in 1st array ");
  scanf("%d%d", &m, &n);
  printf("enter elements in 1st array ");
  for (i = 0; i < m; i++)
  {
    for (j = 0; j < n; j++)
    {
      scanf("%d", &a[i][j]);
    }
  }
  printf("enter no of element in 2nd array");
  scanf("%d%d", &p, &q);
  if (n != p)
  {
    printf("product can not perform");
  }
  else
  {
    printf("enter element in 2nd array");
    for (i = 0; i < p; i++)
    {
      for (j = 0; j < q; j++)
      {
        scanf("%d", &b[i][j]);
      }
    }

    printf("product\n");
    for (i = 0; i < m; i++)
    {
      for (j = 0; j < q; j++)
      {
        for (k = 0; k < p; k++)
        {
          sum = sum + a[i][k] * b[k][j];
        }
        multiply[i][j] = sum;
        sum = 0;
      }
    }
  }
  for (i = 0; i < m; i++)
  {
    for (j = 0; j < q; j++)
    {
      printf("%d\t", multiply[i][j]);
    }
    printf("\n");
  }
}