#include<stdio.h>
#include<stdlib.h>

// Stack implement
// Two Function - Push,Pop

struct Node
{
    int info;
    struct Node *link;
};
struct Node *First = NULL;

void pushElement(int x)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->info = x;
    if(First == NULL)
    {
        newNode->link = NULL;
        First = newNode ;
    }
    else
    {
        newNode->link = First;
        First = newNode;
    }
}                        

void popElement()
{
    struct Node *Save = First;
    
    if(First == NULL)
    {
        printf("Your Link List Is Emty:");
    }
    else
    {
       First = First->link;
    }
    free(Save);
}

void display()
{
    struct Node *temp = First;
    printf("\nYour Link List is:-\n");
    while(temp != NULL)
    {
        printf("%d =>",temp->info);
        temp = temp->link;
    }
    
}
void main()
{
    int a,count;
    while(1)
    {
        printf("\nEnter 1 for Push // 2 for Pop //  3 for diaplay:-");
         scanf("%d",&count);
        switch(count)
        {
            case 1:
                    printf("Enter A Number:-");
                    scanf("%d",&a);
                    pushElement(a);
                    break;
            case 2:
                    popElement();
                    break;
            case 3:
                    display();
                    break;
        }
    }
}