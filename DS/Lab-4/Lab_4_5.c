#include<stdio.h>

void main()
{
    int n,pos;
    
    printf("enter size:- ");
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == arr[i+1])
        {
            pos = i;
            break;
        }
    }
    for(int i = pos; i < n; i++)
    {
        arr[i] = arr[i+1];
    }

    n--;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}