#include<stdio.h>

int main()
{   int x, y, z;
   
    printf("Enter a number x : " );
    scanf("%d", &x);
    printf("Enter a number y : " );
    scanf("%d", &y);
    printf("Enter a number z : " );
    scanf("%d", &z);

//   Checking Validity for maximum value 
    if(x>y && x>z)
        printf("\n%d is the maximum number", x);
    else if(y>x && y>z)
     printf("\n%d is the maximum number", y);
    else
     printf("\n%d is the maximum number", z);

//   Checking Validity for minimum value 
    if(x<y && x<z)
        printf("\n%d is the minimum number", x);
    else if(y<x && y<z)
     printf("\n%d is the minimum number", y);
    else
     printf("\n%d is the minimum number", z);
 return 0;
}
