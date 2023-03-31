#include<stdio.h>
#include<string.h>
void main()
{
char str1[20],str2[20];
printf("Enter two strings:");
gets(str1);
gets(str2);
strcat(str1,str2);
printf("First string:%s\t second string:%s\n",str1,str2);
strcat(str1,"-one");
printf("Now first string is %s\n",str1);
printf("Now second string is %s\n",str2);
}
