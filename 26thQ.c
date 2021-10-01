#include<stdio.h>

int main()
{
    int A[3][3], B[3][3], C[3][3], D[3][3], E[3][3], i, j;
    // Asking User to input 9 numbers in first matrix
    printf("Input 9 elements in the first matrix :\n");
       for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
	           printf("element - [%d],[%d] : ",i,j);
	           scanf("%d",&A[i][j]);
            }
        } ;
        printf("\n");
        
    // Asking User to input 9 numbers in second matrix
    printf("Input 9 elements in the second matrix :\n");
       for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
	           printf("element - [%d],[%d] : ",i,j);
	           scanf("%d",&B[i][j]);
            }
        } ;
    // The Matrix are :
    printf("\nThe Matrix are: \n");
         for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
              printf("%d ", A[i][j]);
             
	        }
            printf("\n");
        } ;
            printf("\n");
         for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
              printf("%d ", B[i][j]);
             
	        }
            printf("\n");
        } ;
    // The sum Of given matrix is:
        printf("\nThe sum of a Matrix is: \n");
         for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
	          C[i][j] = A[i][j] + B[i][j];
              printf("%d ", C[i][j]);
	        }
            printf("\n");
        } ;
    // The difference between the given two matrix are 
         printf("\nThe difference of a Matrix is: \n");
         for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
	          D[i][j] = A[i][j] - B[i][j];
              printf("%d ", D[i][j]);
	        }
            printf("\n");
        } ;
    // The product between the given two matrix are 
         printf("\nThe Product of a Matrix is: \n");
         for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
	          E[i][j] = A[i][0] * B[0][j] + A[i][1] * B[1][j]
                        + A[i][2] * B[2][j];
              printf("%d ", E[i][j]);
	        }
            printf("\n");
        } ;

    return 0;
}
