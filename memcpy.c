//Implementation of memcpy() in C Programming  
#include <stdio.h>  
#include <string.h>  
int main(int argc, const char * argv[])  
{   
int res;    
char orgnl[50];  
char copy[50];    
strcpy(orgnl,   
res = memcpy(copy, orgnl, 27);    
copy[27] = 0;    
printf("%s\n", copy);  
    return 0;  
} 
