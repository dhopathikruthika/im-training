#include<stdio.h>
void change(int *a, int *b)
{
int k;
k=*a;
*a=*b;
*b= k;
printf("value in this function a=%d and b=%d\n",*a,*b);
}
void main()
{
int a,b;
void change(int *,int *);
printf("enter two values:\n");
scanf("%d%d",&a,&b);
change(&a,&b);
printf("after changing two value of a=%d and b=%d\n:",a,b);
}

