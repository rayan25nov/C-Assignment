#include<stdio.h>
int rec_bin(int num);
void main()
{
int num;
printf("\nEnter Number: ");
scanf("%d", &num);
printf("Decimal To Binary Using Recursion: %d", rec_bin(num));
   
}
//Creating a recursive function to evaluate decimal to binary
int rec_bin(int num)
{
    if(num==0)
    {
        return 0;
    }
    else
    {
        return ((num%2)+10*rec_bin(num/2));
    }
}

