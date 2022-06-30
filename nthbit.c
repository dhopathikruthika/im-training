#include <stdio.h>

void isnthBitSet(int n, int k)
{
	if (n & (1 << (k - 1)))
		printf("SET");
	else
		printf("NOT SET");
}
int main()
{
	int n = 5, k = 1;
	isnthBitSet(n, k);
	return 0;
}
