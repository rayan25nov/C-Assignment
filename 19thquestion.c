#include<stdio.h>
int main()
{

    int i, j, x ;
    // Asking user to input number.
    printf("Enter a number : ");
    scanf("%d", &x);

    // Loop for pattern
    for (i=1; i<=x; i++){
        for(j=i; j<x; j++){
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
    return 0;
}

//   int main()
// {

//     int i, j, x, k ;
//     // Asking user to input number.
//     printf("Enter a number : ");
//     scanf("%d", &x);

//     // Loop for pattern
//     for (i=1; i<=x; i++){
//         for(j=i; j<x; j++){
//             printf(" ");
//         }
//         for(k=1; k<(i*2); k++){
//             printf("%d", k);
//         }
//         printf("\n");
//     }
//     return 0;
// }