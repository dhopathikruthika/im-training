#include<stdio.h>
int main()
{
int big,small,limit,range,num;
printf("enter the limit\n");
scanf("%d",&limit);
printf("enter %d numbers\n",limit);
scanf("%d",&num);
small=big=limit;
limit=limit-1;
while(limit)
{
scanf("%d",&num);
if(num>big)
{
big=num;
}
if(num<small)
{
small=num;
}
limit--;
}
range=big-small;
printf("small number=%d\nbig number=%d\n",small,big);
printf("range=%d\n",abs(range));
return 0;
}
