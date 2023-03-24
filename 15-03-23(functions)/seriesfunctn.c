#include<stdio.h>
#include<math.h>
float series(int x,int n)
{
     float sum=1;
     int i;
     for(i=1;i<=n;i++)
     sum=sum+(1.0/pow(x,i));
     return sum;
}
int main()
{
     int X,N,i;
     float s;
     printf("Calculate Series:\n\n1+1/x^1/x^2+1/x^3+1/x^4+…………\n\n");
     printf("\nEnter Value of x : ");
     scanf("%d", &X);
     printf("\nEnter Value of N : "); 
     scanf("%d", &N);
     printf("\n1 +");
     for(i=1;i<=N;i++)
     {
          if(i==N)
               printf("(1/%d^%d)  ",X,i);
          else
               printf(" (1/%d^%d) + ",X,i);
     }
     s=series(X,N); 
     printf("\n\nSum of Series : %.3f",s);
     return 0;
}
