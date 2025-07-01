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
        newNode->link = NULL;
        First = newNode;
    }
    else
    {
        newNode->link = First;
        First = newNode;
    }
}

void duplicateList()
{
    struct Node *Save = First;

    while (Save != NULL && Save->link != NULL)
    {
        if(Save->info == Save->link->info)
        {
            struct Node *temp = Save->link;
            Save->link = Save->link->link;
            free(temp);
        }
        else
        {
            Save = Save->link;
        }
    }   
}

void display()
{
    struct Node *temp=First;
    printf("\nYour Link List is: \n");
    while(temp!=NULL)
    {
            printf("%d -> ",temp->info);
            temp = temp->link;
    }

}

void main()
{
    int a,count;

    while(1)
    {
        printf("\n 1 For Insert A Number // 2 For Display:-");
        scanf("%d",&count);

        switch(count)
        {
            case 1:
                    printf("enter a number:-");
                    scanf("%d",&a);
                    insertAtFirst(a);
                    break;
            case 2: 
                    duplicateList();
                    display();
                    break;
        }
    }
}