// Program to convert binary number to a decimal number

#include <stdio.h>
#include <math.h>
void main()
{
    int n,a,N,deci=0,b=0;
    printf("Enter the valid binary number:");
    scanf("%d",&n);
    N=n;
    while(n)
    {
        a=n%10;
        deci=deci+a*pow(2,b);
        n=n/10;
        b++;
    }
    printf("Decimal equivalent of %d is %d.",N,deci);
}