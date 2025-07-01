#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    srand(time(0));

    int n;
    printf("Enter Your Size Of Array:-");
    scanf("%d", &n);

    char str[n][50];

    printf("Enter Your Strings:-\n");

    for(int i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
    }

    int randomIndex = rand() % n;

    printf("Random String Is: %s\n", str[randomIndex]);

    printf("Your Strings Are:\n");

    char str2[10],temp;

    scanf("%s", str2);

    for(int  i = 0;i < strlen(str[randomIndex]);i++)
    {
        for(int j = i+1;j < strlen(str[randomIndex]);j++)
        {
            if(str[randomIndex][i] > str[randomIndex][j])
            {
                temp = str[randomIndex][i];
                str[randomIndex][i] = str[randomIndex][j];
                str[randomIndex][j] = temp;
            }
        }
    }

    for(int  i = 0;i < strlen(str2);i++)
    {
        for(int j = i+1;j < strlen(str2);j++)
        {
            if(str2[i] > str2[j])
            {
                temp = str2[i];
                str2[i] = str2[j];
                str2[j] = temp;
            }
        }
    }

    if(strcmp(str[randomIndex],str2) == 0)
    {
        printf("Anagrams.\n");
    }
    else
    {
        printf("Not Anagrams.\n");
    }

    return 0;

}