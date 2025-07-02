#include<stdio.h>
#include<string.h>

void main()
{
    char str[50],rev[50],*p,*ptr;
    int len = 0;
    printf("Enter A String:-");
    scanf("%s",str);

    p = str;
    ptr = rev;

    for(int i = 0;*(p + i) != '\0';i++)
    {
        len = len + 1;
    }
    for(int i = len - 1;i >= 0;i--)
    {
        *(ptr + i) = *(p + len - 1 - i); 
    }

    *(ptr + len) = '\0';
    
    if(strcmp(str,rev)==0)
    {
        printf("%s is Palindrome",str);
    }
    else
    {
        printf("%s is not Palindrome",str);
    }
}