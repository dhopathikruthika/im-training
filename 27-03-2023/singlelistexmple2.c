#include<stdio.h>
#include<stdlib.h>
struct node {
int data;
struct node *link;
};
int main()
{
struct node *head=malloc(sizeof(struct node));
head->data=98;
head->link=NULL;
printf("%d ",head->data);
struct node *current=malloc(sizeof(struct node));
current->data=20;
printf("%d ",current->data);
current->link=NULL;
head->link=current;
printf("%d ",current->link);
current=malloc(sizeof(struct node));
current->data=35;
printf("%d ",current->data);
current->link=NULL;
head->link->link=current;
printf("%d ",current->link);
return 0;
}

