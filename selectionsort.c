#include<stdio.h>
void selectionsort(int a[],int size);
void print(const int a[],int imin,int imax);			
int main()
{
const int size=8;
int a[]={6,8,9,3,7,2,1,4};
print(a,0,size-1);
printf("\n");
selectionsort(a,size);
print(a,0,size-1);
printf("\n");
}
void selectionsort(int a[],int size)
{
int temp,i,j;
for(i=0;i<size-1;++i)
{
print(a,0,i-1);
print(a,i,size-1);
int minIndex=i;
for(j=i+1;j<size;++j)
{
if(a[j]<a[minIndex])minIndex=j;
}
if(minIndex!=i)
{
temp=a[i];
a[j]=a[minIndex];
a[minIndex]=temp;
}
printf("=>");
print(a,0,i-1);
print(a,i,size-1);
printf("\n");
}
}
void print(int a[],int imin,int imax)
{
inti;
printf("{");
for(i=imin;i<=imax;++i)
{
printf("%d",a[i]);
if(i<imax)
printf(",");
}
printf("}");
}



