// To find the first and last digit of a number

#include <stdio.h>
void main()
{
    int N,n,i,a,b;
    printf("Enter the number:");
    scanf("%d",&n);
    N=n;
    a=n%10;
    for(i=1;n>0;i++)
    {
        b=n%10;
        n=n/10;
    }
    printf("The first and last digit of %d is %d and %d respectively",N,b,a);
}