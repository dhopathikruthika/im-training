#include <stdio.h>
#include <string.h>
void writeToFile(char str[])
{
	FILE* fp;
	fp = fopen("f1.txt", "w");
	fputs(str, fp);
	fclose(fp);
}
int main()
{
	char str[20];
	strcpy(str, "GeeksforGeeks");
	writeToFile(str);
	printf("%s",str);
	return 0;
}

