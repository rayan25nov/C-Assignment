#include<stdio.h>

int main()
{   
    int i, fact=1, num;
//  Asking user to input a number.
    printf("Enter a number: ");
    scanf("%d", &num);
// Creating a loop for factorial of number provided by user.
    for (i=1; i<=num; i++){
        fact = fact * i;
        
    }
//  Printing the factorial of a number.
    printf("Factorial of %d = %d.", num, fact);
    return 0;
}
