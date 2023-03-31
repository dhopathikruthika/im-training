#include<stdio.h>
#define N 10
int main()
{
int a[N],i;
for(i=0;i<N;i++)
{
printf("enter the input for index %d: ",i); 
scanf("%d",&a[i]);
}
printf("\n array elements are follows:\n");
for(i=0;i<N;i++)
{
printf("%d",a[i]);
}
return 0;
}

