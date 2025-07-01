#include<stdio.h>
void main()
{
    int n;
    printf("Enter a Size:-");
    scanf("%d", &n);

    int arr[n];
    printf("Enter a Elemnet of Array:-");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int a,b,index=-1;
    printf("Enter number who in arr:-");
    scanf("%d",&a);
    printf("Enter number who change with arr's number:-");
    scanf("%d",&b);

    for(int i = 0;i < n;i++)
    {
        if(a==arr[i])
        {
            arr[i]=b;
            index = i;
            break;
        }
    }
    if(index == -1)
    {
        printf("Not Fund\n");
    }
    else
    {
        printf("Index is %d\n",index);
    }

    for(int i=0; i<n; i++)
    {
        printf("%d",arr[i]);
    }
}
