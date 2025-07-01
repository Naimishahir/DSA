#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int info;
	struct Node *link;
};

struct Node *insertAtFirst(struct Node *First, int x)
{
	struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
	newNode->info = x;
	if (First == NULL)
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

int checkList(struct Node *F1, struct Node *F2)
{
	if (F1 == NULL && F2 == NULL)
	{
		return 1;
	}
	while (F1 != NULL && F2 != NULL)
	{
		if (F1->info != F2->info)
		{
			printf("Linked List is Not SAME");
			return 0;
		}
		F1 = F1->link;
		F2 = F2->link;
	}
	printf("Linked List is SAME");
	return 0;
}
void display(struct Node *First)
{
	struct Node *temp = First;
	printf("\nYour Link List is: \n");
	while (temp != NULL)
	{
		printf("%d -> ", temp->info);
		temp = temp->link;
	}
}

void main()
{

	struct Node *F1 = NULL;
	struct Node *F2 = NULL;
	int a, count1;

	while (1)
	{
		printf("\nEnter 1 For Frist List \n2 For Second List \n3 For Check List \n4 For Display:-\n");
		scanf("%d", &count1);

		if (count1 == 1)
		{
			printf("Enter a Number:- ");
			scanf("%d", &a);
			F1 = insertAtFirst(F1, a);
		}
		else if (count1 == 2)
		{
			printf("Enter a Number:-");
			scanf("%d", &a);
			F2 = insertAtFirst(F2, a);
		}
		else if (count1 == 3)
		{
			checkList(F1, F2);
		}
		else if (count1 == 4)
		{
			display(F1);
			display(F2);
		}
		else
		{
			break;
		}
	}
}