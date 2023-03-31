#include<stdio.h>
void fun2(int n)
{
if(n<=0)
return;
printf("%d\n",n);
fun2(2*n);
printf("%d\n",n);
}
int main()
{
fun2(4);
return 0;
}
