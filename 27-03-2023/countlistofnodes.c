#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *link;
};
int main()
{

	struct node *head = NULL;
	head =(struct node*)malloc(sizeof (struct node));
	head->data=24;
	head->link=NULL;
	printf("%d\n",head->data);
	struct node *current;
	current=(struct node*)malloc(sizeof (struct node));
	current->data=25;
	current->link=head;
	printf("%d\n",current->data);
	count_of_nodes(head);
}
void count_of_nodes(struct node *head)
{
	int count=1;
	if(head==NULL)
		printf("list is empty:");
	struct node *ptr=NULL;
	ptr=head;
	while(ptr!=NULL)
	{
		count++;
		ptr=ptr->link;
	}
	printf("%d",count);
}

