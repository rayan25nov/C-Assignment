#include<stdio.h>

int main()
{
   int x ;
   printf("\nInput an integer : ");
   scanf("%d", &x);
   
   
   for(int i=1; i<=100; i++){
       if(i % x == 0){
           printf("\n%d is the number divisible by %d", i, x);
       }
   }
      
    return 0;
}