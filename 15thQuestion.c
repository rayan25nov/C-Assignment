#include<stdio.h>

int main()
{
     int i , x, num;
//   Asking user to input a number.
     printf("Enter a number: ");
     scanf("%d", &x);

     num = x;
//  Creating a loop to find prime factor of  given number.
    for(i=2; x>1; i++){
         while (x%i==0)
         {
            printf("\n%d is the prime factor of %d", i, num);
            x = x / i;
        }
             
         }
    
    return 0;
}
