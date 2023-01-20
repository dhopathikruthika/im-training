#include <stdio.h>
int linearSearch(const int a[], int size, int key);
int main() {
const int SIZE = 8;
int a1[] = {8, 4, 5, 3, 2, 9, 4, 1};
printf("%d\n", linearSearch(a1, SIZE, 8));  
printf("%d\n", linearSearch(a1, SIZE, 4));
printf("%d\n", linearSearch(a1, SIZE, 99));
}
int linearSearch(const int a[], int size, int key) {
int i;
for (i = 0; i < size; ++i) 
{
if (a[i] == key) return i;
}
return size;
}
