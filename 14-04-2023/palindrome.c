#include<stdio.h>
int main()
{
int r,n,p=0,temp;
printf("enter the number");
scanf("%d",&n);
temp=n;
while(n!=0)
{
r=n%10;
p=p*10+r;
n=n/10;
}
if(p==temp)
{
printf("Number is palindrome");
}
else
{
printf("Number is not palindrome");
}
return 0;
}
