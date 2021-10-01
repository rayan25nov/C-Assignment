#include<stdio.h>

int main()
{
    /* code */
    float  degreeF, degreeC;
    // INPUT
    printf("Enter the degree farenhite : ");
    scanf("%f", &degreeF);
    // OUTPUT
    degreeC=(degreeF - 32)* 5/9;
    printf("\nDegree celsius is equal to : %f", degreeC);

    return 0;
}

