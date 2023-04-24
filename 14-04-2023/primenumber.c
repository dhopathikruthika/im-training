#include<stdio.h>
int main()
{
int i,n,p=0;
printf("enter the number");
scanf("%d",&n);
for(i=2;i<n;i++)
{
if(n%i==0)
{
p=1;
break;
}
}
if(p==0)
{
printf("Number is prime");
}
else
{
printf("Number is not prime");
}
return 0;
}
