#include<stdio.h>

void main()
{
    int m,n;

    printf("enter row and col");
    scanf("%d %d",&m,&n);

    int a[m][n],b[m][n],c[m][n];

    printf("Enter frist arr ");
    for(int i = 0;i < m;i++)
    {
        for(int j = 0;j < n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    } 
    printf("Enter Second arr ");
    for(int i = 0;i < m;i++)
    {
        for(int j = 0;j < n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    } 
    for(int i = 0;i < m;i++)
    {
        for(int j = 0;j < n;j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    } 
    for(int i = 0;i < m;i++)
    {
        for(int j = 0;j < n;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    } 
    
}