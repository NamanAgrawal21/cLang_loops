// To swap the first and last digit of a number

#include <stdio.h>
#include <math.h>
void main()
{
    int a,b,n,N,count;
    printf("Enter the number:");
    scanf("%d",&n);
    a=n%10;                                     // a ---> last digit
    count=log10(n);
    b=n/(pow(10,count));                        // b ---> first digit
    N=a*(pow(10,count));
    N=N+(n % ((int)(pow(10,count))));           // pow() gives a double but % works on only int
    N=N-a;
    N=N+b;
    printf("The number %d after swapping of first and last digit is %d",n,N);
}