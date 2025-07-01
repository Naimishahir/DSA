#include<stdio.h>

void main()
{
    int x,y,pow=1;
    printf(" Enter number and power:");
    scanf("%d %d",&x,&y);

    for(int i=1;i<=y;i++)
    {
        pow = pow * x;
    }
    printf("%d",pow);
}