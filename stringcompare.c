#include<stdio.h>
int main (){
    char s1[100],s2[100];
    int i=0,length1=0,length2=0,j=0,found=0;
    printf("Enter the string: ");
    gets(s1);
    printf("Enter the 2nd string: ");
    gets(s2);
    // while(s1[i]!='\0'){
    //     length1++;
    //     i++;
    // }
    // while(s2[j]!='\0'){
    //     length2++;
    //     j++;
    // }

        while(s1[i]!='\0'||s2[j]!='\0'){
             i++;
            j++;
            if (s1[i]!=s2[j])
            {
                found=1;
            }
            
           
            
        }
        if (found!=1)
        {
            printf("indentical");
        }
        else
        {
            printf("not identical");
        }
        
    
    

    
    
}