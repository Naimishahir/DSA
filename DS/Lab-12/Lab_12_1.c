#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int info;
    struct Node *link;
};

struct Node *First = NULL;

void insertAtFirst(int x)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->info = x;
    if(First == NULL)
    {
        newNode->link =NULL;
        First = newNode;
    }
    else
    {
        newNode->link = First;
        First = newNode;
    }
}

void copyList(struct Node *First)
{
    struct Node *temp = First;
    while(temp != NULL)
    {
        struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
        newNode->info = temp->info;
        temp = temp->link;
    }
}

void display()
{
    struct Node *temp=First;
    printf("\nYour Link List is: \n");
    while(temp!=NULL)
    {
            printf("%d -> ",temp->info);
            temp=temp->link;
    }
    
}
void displayCopy()
{
    struct Node *temp=First;
    printf("\nYour Copy Link List is: \n");
    while(temp!=NULL)
    {
            printf("%d => ",temp->info);
            temp=temp->link;
    }
}

void main()
{
    int a,count;
    
    while(1)
    {
        printf("\nEnter 1 for Insert Number At First Posistion //  2 For Copy & Display:- ");
        scanf("%d",&count);

        switch (count)
        {
        case 1: 
                printf("enter a number");
                scanf("%d",&a);
                insertAtFirst(a);
                break;
        case 2:
                copyList(First);
                display();
                displayCopy();
                break;
        
        }
    }
}
