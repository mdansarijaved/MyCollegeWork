// Basic of arrays
#include<stdio.h>
int main ( ){
    int avg, sum = 0 ;
    int i  ;
    int marks[30];
    for (int  i = 0; i < 30; i++)
    {
        printf("Enter the marks ::");
        scanf("%d",&marks[i]);
        sum = sum + marks[i];
    }
  
  avg = sum / 30;
  printf("average marks = %d",avg);
    
}