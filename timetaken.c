#include <stdio.h>
#include <time.h>

void fun()
{
	printf("fun() starts \n");
	printf("Press enter to stop fun \n");
	while(1)
	{
		if (getchar())
			break;
	}
	printf("fun() ends \n");
}
int main()
{
	clock_t t;
	t = clock();
	fun();
	t = clock() - t;
	double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds

	printf("fun() took %f seconds to execute \n", time_taken);
	return 0;
}
