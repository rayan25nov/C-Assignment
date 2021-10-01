#include <stdio.h>
#include <string.h>
void main()
{
    char str1[50];
    int i;
    printf("\n\nFind the length of a string:\n ");
// Asking User to input a String 
    printf("Input a string : ");
    gets(str1);
//  Creating a loop to calculate length of a string 
    for (i = 0; str1[i] != '\0'; ++i);
    
// printing the length of a string 
    printf("The length of the string %s is : %d\n\n", str1, i);
}
