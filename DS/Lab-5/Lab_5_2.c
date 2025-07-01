#include<stdio.h>

void main()
{
    int m,n;

    printf("enter row and col");
    scanf("%d %d",&m,&n);

    int a[m][n],b[n][m],c[m][m];

    printf("Enter frist arr ");
    for(int i = 0;i < m;i++)
    {
        for(int j = 0;j < n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter Second arr ");
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < m;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(int i = 0;i < m;i++)
    {
        for(int j = 0;j < m;j++)
        {
            c[i][j] = 0;
            for(int k = 0;k < n;k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
            
        }
    }
     for(int i = 0;i < m;i++)
    {
        for(int j = 0;j < m;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

    

}
