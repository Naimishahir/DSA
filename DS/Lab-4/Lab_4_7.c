#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    for(int i = 0; i < str[i] != '\0';i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
        else
        {
            break;
        }

    }

    printf("Your String Is: %s\n",str);
    
    return 0;
}