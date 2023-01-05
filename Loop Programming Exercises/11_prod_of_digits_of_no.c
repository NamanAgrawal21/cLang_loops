// To find the product of digits of a number

#include <stdio.h>
void main()
{
    int i,n,N,a,pro=1;
    printf("Enter the number:");
    scanf("%d",&n);
    N=n;
    for(i=1;n>0;i++)
    {
        a=n%10;
        pro=pro*a;
        n=n/10;
    }
printf("The product of digits of %d is %d",N,pro);
}