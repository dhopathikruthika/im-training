#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,num=10,sum=0,*ptr;
printf("enter no of elements: ");
scanf("%d",&num);
ptr=(int*)calloc(num,sizeof(int));
printf("enter the elements: ");
for(i=0;i<num;i++)
{
scanf("%d",ptr+i);
sum=sum+*(ptr+i);
}
printf("sum=%d",sum);
//free(ptr);
return 0;
}

