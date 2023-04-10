#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE* ptr;
	ptr =fopen("./Hello.txt", "w+");
	if (ptr == NULL) {
		printf("Error Occurred While writing to a text "
			"file !");
		exit(1);
	}
	char str[] = "This is all the Data to be inserted in "
				"File by GFG.";
	fputs(str, ptr);
	printf("%s",str);
	fclose(ptr);
	printf("Data Written Inside the file\n");
	return 0;
}

