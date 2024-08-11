//sum of digits using recursion
#include<stdio.h>
int sumofdigits(int num)
{
    int rem;
    int sum=0;
    sum=sum+(num%10);
    rem=num/10;
    if(rem>0)
    {
    sumofdigits(rem);
    }
return sum;
}
int main()
{
    int i,num;
    printf("enter a number: ");
    scanf("%d",&num);
    printf("sum of digits of number= %d",sumofdigits(num));
    //getch();
}