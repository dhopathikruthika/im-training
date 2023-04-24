#include<stdio.h>
void swap (int *p, int *q) {
  int temp_val;
  temp_val = *p;
  *p = *q;
  *q = temp_val;
  }
  
int main() 
{
  int x = 45;
  int y = 65;
  printf( "Initial value of x = %d and y = %d\n", x, y );
  swap(&x, &y);
  printf( "After swapping said values x = %d and y = %d\n", x, y );
  return 0;
  }
