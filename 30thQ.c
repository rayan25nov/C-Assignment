#include<stdio.h>
#include <string.h>

int main() {
   printf("\n\n----Program to Abbreviate a string----\n ");
   char str[50];
  // Asking User to input a String 
   printf("Input a string to Abbreviate : ");
   gets(str);
   printf("The Abbreviated form of %s is : ", str);
   char * token = strtok(str, " ");
  // Creating a loop to print first letter of each word 
   while( token != NULL ) {
   printf( "%c", token[0]);
  // printing each token
      token = strtok(NULL, " ");
   }
   printf("\n\n");
   return 0;
}

