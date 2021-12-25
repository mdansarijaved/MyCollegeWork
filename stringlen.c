// WAP to find the length of a string with out using string fuction
#include<stdio.h>
int main (){
    char str[100];
    int length=0,i=0;
    printf("Enter the string");
   gets(str);
    while (str[i]!='\0')
    {
        length++;
        i++;
    }
    printf("Length of string is %d",length);
}