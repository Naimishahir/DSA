#include<stdio.h>

void main()
{
    int n,m;
    printf("Enter size of array 1: ");
    scanf("%d", &n);
    printf("Enter size of array 2: ");
    scanf("%d", &m);

    int arr[n],arr2[m];

    for(int i = 0;i < n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i = 0;i < m;i++)
    {
        scanf("%d",&arr2[i]);
    }

    int arr3[n+m];

    for(int i = 0;i < n;i++)
    {
        arr3[i] = arr[i];
    }

    for(int i = 0;i < m;i++)
    {
        arr3[n+i] = arr2[i];
    }

    for(int i = 0;i < n+m;i++)
    {
        printf("%d ",arr3[i]);
    }
}

  