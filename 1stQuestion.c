#include<stdio.h>
int main()
{
   
    float l ,b ,r, ar, pr, ac, cc;
    
    printf("Enter the length of a rectangle : ");
    scanf("%f", &l);
    printf("Enter the breadth of a rectangle : ");
    scanf("%f", &b);

    
    printf("Enter the radius of a circle : ");
    scanf("%f", &r);
    
    
    ar = l * b;
    pr = 2 * (l + b);

    
    ac = 3.14 * r * r ;
    cc = 2 * 3.14 * r;

    printf("\nThe area of the rectangle : %lf", ar);
    printf("\nThe perimeter of the rectangle : %lf", pr);
    printf("\nThe area of the circle : %lf", ac);
    printf("\nThe circumference of the circle : %lf", cc);
    return 0;
}

