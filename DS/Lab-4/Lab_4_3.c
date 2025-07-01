#include<stdio.h>

void main()
{
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n + 1];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    
    int a,temp;

    printf("give the value:-");
    scanf("%d", &a);

    arr[n] = a;

    for(int i = 0;i <= n;i++)
    {
        for (int j = i+1; j <= n; j++)
        {
            
            if(arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i <= n; i++)
    {
        printf("%d", arr[i]);
    }
}