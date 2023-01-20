/* Function to increment each element of an array (IncrementArray.c) */
#include <stdio.h>
void inc(int array[], int size);
void print(int array[], int size);

int main() {
int a1[] = {8, 4, 5, 3, 2};
print(a1, 5);   
inc(a1, 5);     
print(a1, 5); 
}
void inc(int array[], int size) 
{  
int i;
for (i = 0; i < size; ++i) 
{
array[i]++; 
}
}
void print(int array[], int size) {
int i;
printf("{");
for (i = 0; i < size; ++i) {
printf("%d", array[i]);
if (i < size - 1) {
printf(",");
}
}
printf("}\n");
}
