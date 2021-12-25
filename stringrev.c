#include<stdio.h>
#include<string.h>
int main(){
    char s1[100],s2[100];
    int i=0,j, swap ;

    printf("Enter the string :  ");
    gets(s1);
    j=strlen(s1)-1;
    while(i<j){
        swap=s1[j];
        s1[j]=s1[i];
        s1[i]=swap;
        i++;
        j--;
    }
    puts(s1);
}