#include<stdio.h>
int main()
{
    int n,count=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    printf("\n Number id digits in entered number is : %d",count);
return 0;
}