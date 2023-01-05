// To find the sum of digits of a number

#include <stdio.h>
void main()
{
    int i,n,N,a,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    N=n;
    for(i=1;n>0;i++)
    {
       a=n%10;
       sum=sum+a;
       n=n/10;
    }
    printf("The sum of digits of %d is %d",N,sum);
}