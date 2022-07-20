#include<stdio.h>
int main()
{
    int i,fact=1,n;
    printf("\n Enter the value for n : ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        fact=fact*i;
    }
    printf("\n Factorial of n natural numbers is : %d",fact);
return 0;
}