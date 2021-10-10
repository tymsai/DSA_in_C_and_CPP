#include <stdio.h>
#include <stdlib.h>
struct student
{
	int roll;
	struct student *next;
};
struct student *head = NULL, *newnode = NULL, *temp = NULL;
void construct()
{
	int i = 1;
	printf("\nConstructed Linked List Sucessfully\n");
	head = (struct student *)malloc(sizeof(struct student));
	head->roll = i;
	head->next = NULL;
	temp = head;
	for (int i = 2; i < 11; i++)
	{
		newnode = (struct student *)malloc(sizeof(struct student));
		newnode->roll = i;
		newnode->next = NULL;
		temp->next = newnode;
		temp = temp->next;
	}
}
void traverse()
{
	temp = head;
	printf("\nValues in Linked list are\n");
	while (temp != NULL)
	{
		printf("%d\n", temp->roll);
		temp = temp->next;
	}
}
void insertatbeg()
{
	int i = 60;
	printf("\nInserted at starting\n\n");
	newnode = (struct student *)malloc(sizeof(struct student));
	newnode->roll = i;
	newnode->next = head;
	head = newnode;
}
void insertatend()
{
	printf("\nNode Inserted at end\n");
	int val = 95;
	newnode = (struct student *)malloc(sizeof(struct student));
	newnode->roll = val;
	newnode->next = NULL;
	temp = head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newnode;
}
int main()
{
	int user = 5;
	if (head == NULL)
	{
		construct();
	}
	while (user != 4)
	{
		printf("\nHit 1 to View Nodes\nHit 2 to Insert at begining\nHit 3 to insert at end\nHit 4 to exit\n");
		scanf("%d", &user);
		switch (user)
		{
		case 1:
			traverse();
			break;
		case 2:
			insertatbeg();
			break;
		case 3:
			insertatend();
			break;
		case 4:
			break;
		}
	}
	return 0;
}
