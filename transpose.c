// How to print the transpose of a given matrices 
#include<stdio.h>
int main (){
    int a[10][10],transpose[10][10];
    int i , j , m , n , p , q  ;
    printf("Enter the number of row and columns in a ");
    scanf("%d%d",&m,&n);
    printf("Enter the element ");
    for (int i = 0; i < m  ; i++)
    {
      for (int j = 0; j < n; j++)
      {
          scanf("%d",&a[i][j]);
      }
      
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            transpose[j][i]=a[i][j];
           
        }

        
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d  ",transpose[i][j]);
        }
        
    }
    
    
    
}