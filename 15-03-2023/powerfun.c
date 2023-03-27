#include<stdio.h>
#include<math.h>
void power(int x,int y, int z); // function prototype
int main()
{
     int x,y,z;
     printf("Enter Value of x: ");
     scanf("%d",&x);
     printf("\nEnter Value of y: ");
     scanf("%d",&y);
     printf("\nEnter Value of z: ");
     scanf("%d",&z);
     printf("\n");
     power(x,y,z);
     return 0;
}
void power(int x,int y, int z)
{
     int ans = 1, i;
     for(i = 1; i <= (y+z); i++)
          ans = ans*x;
     printf("%d ^ (%d+%d) = %d",x,y,z,ans);
}
