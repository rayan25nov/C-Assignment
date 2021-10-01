#include <stdio.h>
#include <string.h>

void main()
{
    char str[50];
    int i, len = 0;
    printf("\n\n----Program to reverse a string----\n ");
// Asking User to input a String 
    printf("Input a string : ");
    gets(str);
//  Creating a loop to calculate length of a string 
    for (i = 0; str[i] != '\0'; i++)
    {
        len++;
    }
// Creating a loop to reverse a string 
    printf("After reversing the string is : ");
    for(i=len-1; i>=0; i--){
        printf("%c", str[i]);
    }
    printf("\n\n");
}
