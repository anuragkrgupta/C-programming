#include<stdio.h>
int main()
{
    int arr[5],i;
    printf("enter an element: ");
    for(i=0;i<=5;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("array elements: ");
    for(i=0;i<=5;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}