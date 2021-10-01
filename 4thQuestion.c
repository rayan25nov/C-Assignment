#include<stdio.h>

int main()
{
    /* code */
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    
    if(num %2==0)
             printf("%d is an even integer.\n", num);
            else
              printf("%d is an odd integer.", num);
            
    return 0;
}
