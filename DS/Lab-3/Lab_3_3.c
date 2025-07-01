#include<Stdio.h>
void main()
{
    int n,sum=0;
    scanf("%d", &n);

    for(int i=1;i<=n;i++)
    {
        sum+=i;
    }

    float avg=(float)sum/n;

    printf("%f",avg);
}