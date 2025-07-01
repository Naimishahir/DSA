#include "stdio.h"

void main()
{
    int n;
    printf("give a size of array");
    scanf("%d", &n);

    int arr[n + 1];
    

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int pos;
    printf("Enter position");
    scanf("%d", &pos);
    if (pos > 0 && pos <= n)
    {
        for (int i = n; i > pos; i--)
        {
            arr[i] = arr[i-1];
        }
    }
    int a;

    printf("give the value");
    scanf("%d", &a);

    arr[pos] = a;

    for (int i = 0; i <= n; i++)
    {
        printf("%d", arr[i]);
    }
}