#include<stdio.h>
#include<string.h>
void main()
{
static int arr[]={20,25,15,27,105,96};
int *x,*y;
int a[]={0};
x=&a[5];
y=&a[0]+5;
if(x==y)
printf("same");
else
printf("not");
}
