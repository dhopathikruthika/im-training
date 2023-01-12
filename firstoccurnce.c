#include<stdio.h>
#include<string.h>
int main()
{
int i,flag;
char str[100],ch;
i=flag=0;
printf("enter any string : ");
gets(str);
printf("\n please enter the character that u r searching for: ");
scanf("%c",&ch);
while(str[i]!='\0')
{
if(str[i]==ch)
{
flag++;
break;
}
i++;
}
if(flag==0)
{
printf("\n sorry, we didn't found the character u r seraching '%c'",ch);
}
else
{
printf("\n the first occurance of the search element '%c' is at position %d",ch,i+1);
}
return 0;
} 

