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
void reverse()
{
    struct Node *prev = NULL;
    struct Node *current = First;
    struct Node *next = NULL;

    while (current != NULL)
    {
        next = current->link; 
        current->link = prev;
        prev = current;       
        current = next;      
    }
    First = prev; 
}
void display()
{
    struct Node *temp=First;
    printf("Your Link List is: \n");
    while(temp!=NULL)
    {
            printf("%d -> ",temp->info);
            temp=temp->link;
    }
    
}

void main()
{
    int a,count;
    
    while(1)
    {
        printf("\nEnter 1 for Insert Number At First Posistion //  2 For Diplay:- ");
        scanf("%d",&count);

        switch (count)
        {
        case 1: 
                printf("enter a number");
                scanf("%d",&a);
                insertAtFirst(a);
                break;
        case 2:
                display();
                break;
        case 3:
                reverse();
                break;
                
        }
    }
}