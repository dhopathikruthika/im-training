#include <stdio.h>
#include <stdlib.h>
int main()
{
char str[80];
FILE* ptr;
ptr = fopen("Hello.txt", "r");
if (ptr == NULL)
{
	printf("Error While opening file");
	exit(1);
}
	
if(fgets(str, 80, ptr) != NULL)
{
  puts(str);
  //printf("%s",str);
}
fclose(ptr);
return 0;
}

