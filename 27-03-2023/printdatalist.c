#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *link;
};
int main()
{
struct node *head=NULL;
head=(struct node*)malloc(sizeof(struct node));
head->data=45;
head->link=NULL;
printf("%d\n",head->data);
struct node *current=NULL;
current=(struct node*)malloc(sizeof(struct node));
current->data=98;
current->link=NULL;
printf("%d\n",current->data);
print_data(head);
}
void print_data(struct node *head)
{
if(head==NULL)
printf("list is empty: ");
struct node *ptr=NULL;
ptr=head;
while(ptr!=NULL)
{
printf("%d ",ptr->data);
ptr=ptr->link;
}
}
