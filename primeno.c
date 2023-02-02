/ *P6. 35 Program to print the prime factors * /
#include<stdio.h>
void pfact (int num);
void rpfact( int n);
main ( )
{
int num;
printf ("Enter a number") ;
scanf("%d",&num);
pfact(num) ;
printf("\n");
rpfact(num) ;
printf("\n");
}
void pfact (int num)
{
int i;
for(i=2;num!=1;i++)
{
while(num%i==O)
{
printf ("%d", i) ;
num=num/i;
}
}
}
void rpfact (int num)
{
static int i=2;
if (num==l)
return;
else
{
while(num%i==O)
{
printf("%d",i);
num=num/ i;
}
i++;
rpfact (num) ;
}
}
