#include<stdio.h>
int main()
{
  
    int n, a = -1, b = 1, c;
    printf("Enter a number : ");
    scanf("%d", &n);

    printf("The Fibonacci sequence of %d are : ", n);
    for(int i=1; i<=n; i++){
        c=a+b;
        printf("%d, ",  c);
        a=b;
        b=c;
    }
    return 0;
}
