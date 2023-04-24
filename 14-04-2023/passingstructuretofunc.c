#include<stdio.h>
struct Example
{
 int num1;
 int num2;
}s[3];

void accept(struct Example *sptr)
{
 printf("\nEnter num1 : ");
 scanf("%d",&sptr->num1);
 printf("\nEnter num2 : ");
 scanf("%d",&sptr->num2);
}
void print(struct Example *sptr)
{
 printf("\nNum1 : %d",sptr->num1);
 printf("\nNum2 : %d",sptr->num2);
}
void main()
{
int i;
for(i=0;i<3;i++)
accept(&s[i]);
for(i=0;i<3;i++)
print(&s[i]);
//getch();
}
