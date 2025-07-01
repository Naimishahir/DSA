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

void insertAtLast(int x)
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
        struct Node *save = First;
        while(save->link!=NULL)
        {
            save = save->link;
        }
        save->link = newNode;
    }
    
}
void deletAtFirst()
{
    struct Node *save = First;
    First = First->link;
    free(save);
}

void deletAtLast()
{
    struct Node *save = First;
    if(First==NULL)
    {
        printf("List is Emty");
    }
    else
    {
        struct Node *pre = save;
        while(save->link != NULL)
        {
            pre = save;
            save = save->link;
        }
        pre->link = NULL;
        free(save);
    }
}

void deletAtGivenPosition(int x)
{
    struct Node *save = First;
    struct Node *pre = NULL;

    if(save->info == x)
    {
        First = save->link;
        free(save);
        return;
    }
    
    while(save->info != x && save->link !=NULL)
    {
        pre = save;
        save = save->link;
    }

    if(save->info != x)
    {
        printf("Node Not Found");
    }
    if(x == First->info)
    {
        First = First->link;
    }
   
    pre->link = save->link;
    free(save);
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
        printf("\nEnter 1 for Insert Number At First Posistion //  2 For Insert At Last Position // 3 For Delet At First // 4 For Delet At Last // 5 For Delet At Given Position // 6 For Diplay:- ");
        scanf("%d",&count);

        switch (count)
        {
        case 1: 
                printf("enter a number");
                scanf("%d",&a);
                insertAtFirst(a);
                break;
        case 2:
                printf("enter a number");
                scanf("%d",&a);
                insertAtLast(a);
                break;
        case 3:
                deletAtFirst();
                break;
        case 4:
                deletAtLast();
                break;
        case 5:
                printf("enter a number");
                scanf("%d",&a);
                deletAtGivenPosition(a);
                break;
        case 6:
                display();
                break;
        default:
                return 0;
        }
    }
}



