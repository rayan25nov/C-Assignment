#include <stdio.h>
int main()
{
	int var = 79;
    // pointer for var
	int *ptr1;
    // double pointer for ptr1
	int **ptr2;

    // storing address of var in ptr1
	ptr1 = &var;
    // Storing address of ptr1 in ptr2
	ptr2 = &ptr1;
	
	// Displaying value of var using
	// both single and double pointers
	printf("Value of var = %d\n", var );
	printf("Value of var using single pointer = %d\n", *ptr1 );
	printf("Value of var using double pointer = %d\n", **ptr2);
	
return 0;
}


