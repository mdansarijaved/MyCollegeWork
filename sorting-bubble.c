// #include<stdio.h>
// int main (){
//     int a[6]={12,3,4,2,5,6};
//     int swap ; 
//     for (int i = 0; i < 6; i++)
//     {
//         for (int j = 0; j < 6; j++)
//         {
//             if (a[i]>a[j])
//             {
//                 swap = a[i];
//                 a[i]=a[j];
//                 a[j]=swap;
//             }
            
//         }
//         printf("%d",a[i]);
        
      
//     }
    
// }
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
      for (int i=a; i<=b; i++) {
      if (i>=1&&i<=9) {
      switch (i) {
      case 1:
      printf("one\n");
      break;
      case 2:
      printf("two\n");
      break;
      case 3:
      printf("three\n");
      break;
      case 4:
      printf("four\n");
      break;
      case 5:
      printf("five\n");
      break;
      case 6:
      printf("six\n");
      break;
      case 7:
      printf("seven\n");
      break;
      case 8:
      printf("eight\n");
      break;
      case 9:
      printf("nine\n");
      break;
      }
      }
      else if (i%2==0) {
      printf("even\n");
      }
      else{
      printf("odd");
      }
      }

    return 0;
}
