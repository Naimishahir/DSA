#include<stdio.h>

void main()
{
    int hour,min,sec,rem;

    printf("Enter a Second:-");
    scanf("%d",&sec);

    hour = sec / 3600;
    rem = sec % 3600;
    min = rem / 60;
    sec = rem % 60;

    printf("%d %d %d ",hour,min,sec);
}