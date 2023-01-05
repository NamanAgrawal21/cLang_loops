// Print all even no between 1 to n
#include <stdio.h>
void main()
{
    int i,n;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
          printf("%d ",i);
          //if(i%2!=0)                             <----- To print odd numbers
          //printf("%d ",i);
    }
}