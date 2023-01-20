/*Insertion sort is also not efficient, with complexity of O(n2).*/
#include <stdio.h>
void insertionSort(int a[], int size);
void print(const int a[], int iMin, int iMax);
int main() {
const int SIZE = 8;
int a[] = {8, 4, 5, 3, 2, 9, 4, 1};
print(a, 0, SIZE - 1);
printf("\n");
insertionSort(a, SIZE);
print(a, 0, SIZE - 1);
printf("\n");
}
void insertionSort(int a[], int size) 
{
int temp; 
int i, prev, shift;
for (i = 1; i < size; ++i) 
{
print(a, 0, i - 1);    
print(a, i, size - 1);
printf("\n");
for (prev = 0; prev < i; ++prev) 
{
if (a[i] < a[prev]) 
{
temp = a[i];
for (shift = i; shift > prev; --shift) 
{
a[shift] = a[shift-1];
}
a[prev] = temp;
break;
}
}
}
}
void print(const int a[], int iMin, int iMax) {
int i;
printf("{");
for (i = iMin; i <= iMax; ++i) 
{
printf("%d" ,a[i]);
if (i < iMax) printf(",");
}
printf("} ");
}
