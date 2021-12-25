// How to find if a number is repeated or not 
#include<stdio.h>
int main(){
    int seen[10]={0};
    int n,rem;
    printf("Enter the value of n::");
    scanf("%d",&n);

     while (n>0)
     {
       rem =  n%10;
       if (seen[rem]==1)
       {
           break;
       }
       seen[rem]=1;
       n=n/10;
     }
     if (n>0)
     {
         printf("yes");
     }
     else
     printf("no");
     return 0;
}