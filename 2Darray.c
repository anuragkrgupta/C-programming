#include<stdio.h>
int main()
{
    int arr[2][2],i,j,sum[2][2];
    printf("enter an element: ");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
        scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
        sum[i][j]=arr[i][j]+arr[i][j];
        }
    }

    printf("sum=\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}