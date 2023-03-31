#include<stdio.h>
int main()
{
int arr[5]={20,5,39,29,49};
int i;
for(i=0;i<5;i++)
{
printf("%d ",arr[i]);
}
printf("\n");
for(i=4;i>=0;i--)
{
printf("%d ",arr[i]);
}
return 0;
}
