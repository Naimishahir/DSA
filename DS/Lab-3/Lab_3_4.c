#include<stdio.h>
void main()
{
    int n,max,min;

    scanf("%d", &n);

    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    max=arr[0];
    min=arr[0];

    int max_index=0, min_index=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            max_index=i;
        }
        else if(arr[i]<min)
        {
            min=arr[i];
            min_index=i;
        }
    }
    printf("Max: %d\n", max);
    printf("Max index: %d\n", max_index);
    printf("Min: %d\n", min);
    printf("Min index: %d\n", min_index);
}