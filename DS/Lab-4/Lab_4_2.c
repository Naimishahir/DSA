#include<stdio.h>
void main()
{
    int n,pos;
    
    printf("enter size");
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("enter position");
    scanf("%d",&pos);

    for(int i = pos; i < n-1; i++)
    {
        arr[i] = arr[i+1];
    }

    n--;
    
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
}