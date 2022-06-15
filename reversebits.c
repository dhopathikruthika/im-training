#include <stdio.h>
unsigned int reverseBits(unsigned int n)
{
	unsigned int rev = 0;
	while (n > 0)
	{
		rev <<= 1;
		if (n & 1 == 1)
			rev ^= 1;
		n >>= 1;
	}
	return rev;
}
int main()
{
	unsigned int n = 11;
	printf("%u",reverseBits(n));
	return 0;
}
