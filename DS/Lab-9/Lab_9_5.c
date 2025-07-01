#include<stdio.h>
#include<stdlib.h>

void main()
{
int n,temp;
    printf("Enter a Size:-");
    scanf("%d",&n);
    int *arr = (int *)malloc(n*sizeof(int));

    for(int  i = 0;i < n;i++)
    {
        scanf("%d",arr + i);
    }

    for(int i = 0;i < n;i++)
    {
        for(int j = i ;j < n;j++)
        {
            if(*(arr + i)>*(arr + j + 1))
            {
                temp = *(arr + i);
                *(arr + i) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
    for(int i = 0; i < n;i++)
    {
        printf("%d",*(arr + i));
    }

}
