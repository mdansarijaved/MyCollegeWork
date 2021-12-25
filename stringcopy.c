#include<stdio.h>
int main(){
    // printf("hello world ");
    char s1[100],s2[100];
    int i=0,j=0;
    printf("Enter the string 1: ");
    gets(s1);
    // printf("Enter the string 2");
    // gets(s2);
    while (s1[i]!='\0')
    {
        s2[j]=s1[i];
        i++;
        j++;
    }
    s2[j]='\0';
    // printf("%s",s2);
    puts(s2);
}