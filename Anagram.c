#include<stdio.h>
#include<string.h>
void sort(char str[]);
int main()
{
char str1[]={"dogers"};
char str2[]={"rgode"};
sort(str1);
sort(str2);

if (strcmp(str1,str2)==0)
printf("the strings are anagrams: ");
else
printf("strings are not anagrams: ");
return 0;
}
void sort(char str[])
{
int i,j,temp;
int len=strlen(str);
for(i=0;i<len;i++)
for(j=0;j<len;j++)
if(str[i]<str[j])
{
temp=str[i];
str[i]=str[j];
str[j]=temp;
}
}

