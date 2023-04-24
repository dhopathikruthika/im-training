#include <stdio.h>
struct Employee
{
 char ename[20];
 int age;
 float salary;
 struct date
 {
 int date;
 int month;
 int year;
 }dob;
}emp = {"Pritesh",20,1000.50,{23,6,2001}};
void main()
{
printf("\nEmployee Name : %s",emp.ename);
printf("\nEmployee AGE : %d",emp.age);
printf("\nEmployee Salary : %f",emp.salary);
printf("\nEmployee DOJ : %d/%d/%d", \
 emp.dob.date,emp.dob.month,emp.dob.year);

}
