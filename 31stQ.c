#include<stdio.h>

int findGCD(int num1,int num2);
// Declaring a main function
int main()
{
  int num1,num2,gcd;
  printf("\n\n ----Recursion : Find GCD of two numbers----\n");
// Asking User to input numbers 
  printf(" Input 1st number: ");
  scanf("%d",&num1);
  printf(" Input 2nd number: ");
  scanf("%d",&num2);
// Passing num1 and num2 in findGCD as an argument
  gcd = findGCD(num1,num2);
  printf("\n The GCD of %d and %d is: %d\n\n",num1,num2,gcd);
  return 0;
}
// Declaring a function to calculate GCD 
int findGCD(int a,int b)
{
    for (int i = 0; a!=b ; i++)
    {
        if(a>b)
              return findGCD(a-b,b);
          else
             return findGCD(a,b-a);
    }
    return a;
    
}
// {
//      while(a!=b)
//      {
//           if(a>b)
//               return findGCD(a-b,b);
//           else
//              return findGCD(a,b-a);
//      }
//      return a;
// }
