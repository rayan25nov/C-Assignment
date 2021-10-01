#include<stdio.h>
int main()
{

    int i, j, x ;
    // Asking user to input number.
    printf("Enter a number : ");
    scanf("%d", &x);

    // Loop for pattern
    for (i=1; i<=x; i++){
        for(j=1; j<=i; j++){
            printf("%d", j);

        }
        printf("\n");
    }
    return 0;
}