#include<stdio.h>
int main()
{
    int n,rem=0,reverse=0;
    printf("\n Enter a numebr");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        n=n/10;
        reverse=reverse*10+rem;
    }
    printf("\n Reverse of a number is : %d",reverse);
return 0;
}