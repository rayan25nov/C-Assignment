#include<stdio.h>
int main()
{
    /* code */
    float bsSalary, grSalary, dAllowance,  hrAllowance;
    // Input basic salary 
    printf("Enter the bacis salary : ");
    scanf("%f", &bsSalary);

    // Calculate gross salary
    dAllowance = 0.6 * bsSalary; 
    hrAllowance = 0.15 * bsSalary; 
    grSalary = bsSalary + dAllowance + hrAllowance;

    // Output Gross Salary
    printf("\nThe gross salary is equal to : %f ", grSalary);


    return 0;
}
