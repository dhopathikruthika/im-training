#include<stdio.h>
#include<string.h>
int main()
{
int i=0,j=0;
char str[]="kruthika reddy";
for(i=0;i<strlen(str);i++)
{
if(i==0&&str[i]!=' ')
{
printf("%c\n", str[i]);
}
else if(i>0 && str[i-1]==' ')
{
printf("%c\n", str[i]);
}
}
return 0;
}


