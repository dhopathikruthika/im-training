#include<stdio.h>
void fun(int n)
{
if(n==0)
return;
//else for tailrecursion method
//printf("%d",n);
//return fun(n-1);
fun(n-1);
printf("%d\n",n);
}
int main()
{
fun(3);
return 0;
}

