#include<stdio.h>
#include<stdlib.h>

//Queue  Implement
// Two Function - Enqueue,Dequeue

struct Node
{
    int info;
    struct Node *link;
};

struct Node *First = NULL;

void enqueueElement(int x)
{   
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->info = x;
    newNode->link = NULL;

    if(First == NULL)
    {
        First = newNode;
    }
    else
    {
        struct Node *Save = First;

        while (Save->link != NULL)
        {
            Save = Save->link;
        }
        Save->link = newNode;
    }
}

void dequeueElement()
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
        printf("\nEnter 1 for Enqueue // 2 for Dequeue //  3 for diaplay:-");
         scanf("%d",&count);
        switch(count)
        {
            case 1:
                    printf("Enter A Number:-");
                    scanf("%d",&a);
                    enqueueElement(a);
                    break;
            case 2:
                    dequeueElement();
                    break;
            case 3:
                    display();
                    break;
        }
    }
}