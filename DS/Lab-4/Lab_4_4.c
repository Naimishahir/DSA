#include<stdio.h>
void main()
{
    int n,pos;
    
    printf("enter size:-");
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int a;

    printf("give the value:-");
    scanf("%d", &a);

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == a)
        {
            pos = i;
            break;
        }
    }
    for(int i = pos; i < n; i++)
    {
        a = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = a;
    }
    

    n--;

    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
}