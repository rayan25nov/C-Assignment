#include<stdio.h>
int main()
{

    int i, j, x ;
    // Asking user to input number.
    printf("Enter a number : ");
    scanf("%d", &x);
    // Loop for upper triangle pattern which goes upto x-1
    for (i=1; i<x; i++){
        for(j=x; j>i; j--){
            printf(" ");
        }
        for(j=1; j<=i; j++){
           printf("%d", j);
        }
       for(j=j-2; j>=1; j--){
          printf("%d", j);
        }
        printf("\n");
    }
    // Loop for below triangle pattern which starts from x and goes upto 1.
    for(i=x; i>=1; i--){
        for(j=x; j>i; j--){
            printf(" ");
        }
        for(j=1; j<=i; j++){
            printf("%d", j);
        }
       for(j=j-2; j>=1; j--){
           printf("%d", j);
        }
        printf("\n");
    }
    // Together these loops makes diamond.
    return 0;
}