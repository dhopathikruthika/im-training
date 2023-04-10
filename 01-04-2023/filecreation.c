// C program to Create a file
#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE* ptr;
	ptr = fopen("./Hello.txt", "w");
	if (ptr == NULL) {
		printf("Error Occurred While creating a "
			"file !");
		exit(1);
	}
	fclose(ptr);
	printf("File created\n");
	return 0;
}

