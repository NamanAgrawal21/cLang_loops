// Program to print the factorial of a number

#include <stdio.h>
void main()
{
    int n,fact=1,N;
    printf("Enter the number:");
    scanf("%d",&n);
    N=n;
    if(n<0)
       printf("Factorial does not exist.");
    else
    {
        while(n)
        {
            fact=fact*n;
            n--;
        }
        printf("Factorial of %d is %d.",N,fact);
    }
}