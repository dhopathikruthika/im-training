#include<stdio.h>
int main()
{
int count=0,input,output;
float high,low,value=30,sum=0,average,range;
printf("enter numbers in a line : input a negative number \n");
scanf("%f",&value);
input:
if(value<0)
goto output;
count=count+1;
if(count==1)
high=low=value;
else if (value>high)
high=value;
else if(value<low)
low=value;
sum=sum+value;
goto input;
output:
average=sum/count;
range=high-low;
printf("\n\n");
printf("total values:%d\n",count);
printf("highest-value:%f\n,lowest-value:%f\n",high,low);
printf("range: %f\n,average :%f\n",range,average);
}
 
