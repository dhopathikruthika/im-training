#include<stdio.h>
void print_stuff(int x,int y);
int calc_value(int a,int b);
void print_stuff(int x,int y)
{
int var_to_print;
var_to_print=calc_value(x,y);
printf("var_to_print=%d\n",var_to_print);
}
int calc_value(int a,int b)
{
return a*b;
}
int main()
{
print_stuff(20,5);
exit(0);
}
