#include<stdio.h>

int main()
{
    /* code */
    // initializing array
    int arr[]={1,2,3,4,5}, i;
    int length = sizeof(arr)/sizeof(arr[0]);

    printf("## Original Array ## \n");
    for (i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("## Reversed Array ## \n");
    for (i = length-1; i >=0 ; i--)
    {
        printf("%d ",arr[i]);
    }
    
    
    return 0;
}


