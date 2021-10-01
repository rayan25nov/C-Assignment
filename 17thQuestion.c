#include<stdio.h>
int main()
{
    int n, x, r, s;
    printf("Amstrong Number between 1 and 500 are : ");

    for(n=1; n<=500; n++){
        s=0;
        x=n;
        while(!x==0){
            r=x%10;
            s += r*r*r ;
            x = x/10;
        }
        if(s==n){
            printf("%d ", n);
        }
    }   
    
    return 0;
}
