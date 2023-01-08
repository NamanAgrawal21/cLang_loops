// Program to find the sum of this series upto n terms:  1 + 2 + 4 + 7 + 11 + 16 + .....

#include <stdio.h>
void main()
{
    int n,i,a=1,diff=0,sum=0;
    printf("Enter the no. of terms:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+a;
        diff++;
        a=a+diff;
    }
    printf("The sum of this series upto %d terms is %d.",n,sum);

}