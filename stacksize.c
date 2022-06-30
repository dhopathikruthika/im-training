#include <stdio.h> 
#include <stdlib.h> 
#include <signal.h> 
 
#define small (209);
 
int main(int argc, char **argv) 
{ 
   int status = 0; 
   int limit = small; 
   while(1) 
   { 
      limit++; 
      int pid = fork(); 
      if(pid == 0) 
      { 
         int arr[limit]; 
         arr[0] = limit; 
         return arr[0]; 
      } 
      waitpid(pid, &status, WUNTRACED); 
      if(WIFEXITED(status)) 
      { 
         printf("Estimated stack size is %d\n", limit * sizeof(int)); 
         break; 
      } 
   } 
   return 0; 
} 
