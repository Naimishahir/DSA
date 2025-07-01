#include<stdio.h>

void main()
{
    int n,count=0;

    printf("Enter a Number:-");
    scanf("%d",&n);

    int temp = n;

    // for count a digit
   
    while(n!=0)
    {
        n = n/10;
        count++;
    }

    n = temp;
    int rem = 0,sum = 0;
    
    // for sum
    
    while(n>0)
    {
        rem = n % 10;
        int power = 1;
        for(int i = 1;i <= count;i++)
        {
        power = power * rem;
        }
        sum = sum + power;
        n = n / 10;
    }

    if(temp == sum)
    {
        printf("Number is Armstrong");
    }
    else
    {
        printf("Not Armstrong");
    }
}