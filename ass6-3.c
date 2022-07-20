#include<stdio.h>
int main()
{
    int i,sum=0,n;
    printf("\n Enter the value for n : ");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+2)
    {
        sum=sum+i;
    }
    printf("\n Sum of n odd natural numbers is : %d",sum);
return 0;
}