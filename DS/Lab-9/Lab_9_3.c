#include<stdio.h>
#include<stdlib.h>

void main()
{
    int n,sum=0;
    scanf("%d",&n);
    int *arr = (int *)malloc(n*sizeof(int));

     for(int  i = 0;i < n;i++)
    {
        scanf("%d",arr + i);
    }


    for(int i = 0;i < n;i++)
    {
        sum = sum + *(arr + i);
    }

    printf("%d",sum);
    free(arr);
}