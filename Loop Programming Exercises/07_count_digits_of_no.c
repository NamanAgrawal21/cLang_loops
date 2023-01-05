// To print the number of digits in a no.

#include <stdio.h>
void main()
{
    int n,N,i,count=0;
    printf("Enter the number:");
    scanf("%d",&n);
    N=n;
    for(i=1;n>0;i++)
    {
        n=n/10;
        count=count+1;
    }
    printf("The no. of digits in %d is %d",N,count);
}