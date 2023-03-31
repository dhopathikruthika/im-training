#include<stdio.h>
int fact(int n)
{
int res=1;
while(n!=0)
{
res=res*n;
n--;
}
return res;
}
int main()
{
printf("%d",fact(4));
return 0;
}
