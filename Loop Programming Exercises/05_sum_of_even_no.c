// To find the sum of all even numbers between 1 to n

#include <stdio.h>
void main()
{
    int n,i,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
           sum=sum+i;
    }
    printf("The sum of all even numbers between 1 to %d is %d",n,sum);
}