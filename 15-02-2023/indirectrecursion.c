#include<stdio.h>
void odd();
void even();
int n=1;
void odd()
{
if(n<=5)
{
printf("%d\n",n+1);
n++;
even();
}
return;
}
void even()
{
if(n<=5)
{
printf("%d\n",n-1);
n++;
odd();
}
return;
}
int main()
{
odd();
}


