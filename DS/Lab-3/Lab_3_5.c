#include<stdio.h>
void main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    int count = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                break; 
            }
        }
    }
    if(count == 1)
    {
        printf("Yes");
    }
    else
    {
       printf("No");
    }
}