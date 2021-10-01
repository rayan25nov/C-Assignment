#include<stdio.h>

int main()
{
    int x, y ;

    printf("Enter a number x : " );
    scanf("%d", &x);
    printf("Enter a number y : " );
    scanf("%d", &y);

    int z = x;
    x = y;
    y = z;

    printf("\nAfter Swapping : x = %d, y= %d", x , y);

    
    return 0;
}
