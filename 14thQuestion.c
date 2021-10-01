#include<stdio.h>

int main()
{
    int i, n ,sum =0, r;
//  Asking user to input a number.
    printf("Enter an integer: ");
    scanf("%d", &n);

//  Divide the number by 10 and store the remainder in a variable r.
   while(n>0){
        r = n % 10;
        sum = sum + r;
        n = n / 10;

    } 
//  Printing the sum of digits of a number.
    printf("The sum of digits of %d is ", sum);
}
