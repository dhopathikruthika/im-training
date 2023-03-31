#include<stdio.h>
#include<string.h>
struct student
{
char name[5];
char branch[2];
int roll;
};
void main()
{
struct student s[5];
int i;
s[i].roll=i+1;
printf("\nEnter information of students:");
for(i=0;i<5;i++)
{
printf("\nEnter the roll no:%d\n",s[i].roll);
printf("\nEnter the name:");
scanf("%s",s[i].name);
printf("\nEnter the branch:");
scanf("%s",s[i].branch);
printf("\n");
}
printf("\nDisplaying information of students:\n\n");
for(i=0;i<200;i++)
{
printf("\n\nInformation for roll no%d:\n",i+1);
printf("\nName:");
puts(s[i].name);
printf("\nBranch:");
puts(s[i].branch);
}
}
