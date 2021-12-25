#include<stdio.h>
int main (){
    char s1[100],s2[100],s3[100];
    int i=0 , j=0 ;
    printf("Enter the string 1::");
    // fgets(s1,100,stdin);
    // scanf("%[^\n]",s1[100]);
    gets(s1);
    printf("Enter the string 2::");
    // fgets(s2,100,stdin);
    // scanf("%[^\n]",s2[100]);
    gets(s2);
    while (s1[i]!='\0')
    {
        s3[j]=s1[i];
        i++;
        j++;

    }
    i=0;
    while (s2[i]!='\0')
    {
        s3[j]=s2[i];
        i++;
        j++;
        
    }
    s3[j]='\0';
    puts (s3);
    // printf("%s",s3);
    
}