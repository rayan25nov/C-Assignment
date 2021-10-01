#include <stdio.h>

int main()
{
   int n , i , sum=0;
// Asking user to input a number.
   printf("Enter a number: ");
   scanf("%d", &n);

// Creating a loop to add sum of numbers
   for (i=1; i<=n; i++){
       sum = sum + i;
   }
// Printing the result of sum of numbers.
   printf("sum of upto %d numbers is = %d", n , sum);
    return 0;
}
