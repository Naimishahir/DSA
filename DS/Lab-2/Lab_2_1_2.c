#include<stdio.h>

void main()
{
    int ans=1,n;
    printf("enter a number :");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        ans = ans * i;
    }
    printf("%d",ans);
}