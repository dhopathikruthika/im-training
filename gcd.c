#include <stdio.h>
int main()
{
    int n1, n2,n3,n4,n5, i, gcd;

    printf("Enter five integers: ");
    scanf("%d %d %d %d %d", &n1, &n2,&n3,&n4,&n5);

    for(i=1; i <= n1 && i <= n2 && i<=n3 && i<=n4 && i<=n5 ; ++i)
    {
        if(n1%i==0 && n2%i==0 && n3%i==0 && n4%i==0 && n5%i==0)
            gcd = i;
    }

    printf("G.C.D of %d  %d %d %d and %d is %d", n1, n2,n3,n4,n5, gcd);

    return 0;
}

