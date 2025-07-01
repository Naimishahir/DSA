#include<stdio.h>

void main()
{
    int sum=0,n;
    printf("enter a number :");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            sum = sum + j ;
        }
    }
    printf("%d",sum);
}