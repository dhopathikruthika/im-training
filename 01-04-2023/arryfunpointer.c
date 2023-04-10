#include<stdio.h>
int add(int,int);
int sub(int, int);
int mul(int,int);
int div(int, int);
int main()
{
int a,b;
int (*operation[4])(int, int);
operation[0]=add;
operation[1]=sub;
operation[2]=mul;
operation[3]=div;
printf("enter two values ");
scanf("%d%d",&a,&b);
int result=(*operation[0])(a,b);
printf("addition(a+b)=%d\n",result);
result=(*operation[1])(a,b);
printf("subtraction(a-b)=%d\n",result);
result=(*operation[2])(a,b);
printf("multiplication(a*b)=%d\n",result);
result=(*operation[3])(a,b);
printf("division(a/b)=%d\n",result);
return 0;
}
int add(int a, int b)
{
return a+b;
}
int sub(int a,int b)
{
return a-b;
}
int mul(int a,int b)
{
return a*b;
}
int div(int a,int b)
{
return a/b;
}

