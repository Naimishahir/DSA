#include<stdio.h>

void main()
{
    int year,week,days,rem;

    printf("Enter a Days:-");
    scanf("%d",&days);

    year = days / 365;
    rem = days % 365;
    week = rem / 7;
    days = rem % 7;

    printf("%d %d %d ",year,week,days);
}