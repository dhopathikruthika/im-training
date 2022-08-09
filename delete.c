#include <stdio.h>
#include <stdlib.h>
typedef struct Node 
{
   int data;
   struct Node* next;
} Node;
void push(struct Node** head_ref, int new_data)
{
	struct Node* new_node
		= (struct Node*)malloc(sizeof(struct Node));
	new_node->data = new_data;
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
}
Node* deleteKey(Node* head, int x)	
{
	if (!head)
		return head;
	while (head && head->data == x)
		head = head->next;
	Node *curr = head, *prev = NULL;
	while (curr) 
	{
		if (curr->data == x)
		prev->next = curr->next;
		else
		prev = curr;
		curr = curr->next;
	}
	return head;
}

void printList(Node* node)
{
	while (node != NULL) 
	{
		printf(" %d ", node->data);
		node = node->next;
	}
}
int main()
{
	struct Node* head = NULL;

	push(&head, 7);
	push(&head, 2);
	push(&head, 3);
	push(&head, 2);
	push(&head, 8);
	push(&head, 1);
	push(&head, 2);
	push(&head, 2);

	int key = 3;

	puts("Created Linked List: ");
	printList(head);
	head = deleteKey(head, key);
	if (!head)
		printf("\nNo element present in the Linked list\n");
	else 
	{
		printf("\nLinked List after Deletion is:\n");
		printList(head);
	}
	return 0;
}

