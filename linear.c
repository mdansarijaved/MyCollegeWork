// example of linear and How to find if a number is repeated in the given array and fount its location
#include<stdio.h>
int main (){
    int a[]={20,30,40,50,60,50};
    int i ,found ; 
    for (int i = 0; i < 6; i++)
    {
        printf("%d  ",a[i]);
        if (a[i]==50)
    {
        printf("found ");
        found=1;
    
    }
    
    }
    if (found==0)
    {
        printf(" not found");
    }
}