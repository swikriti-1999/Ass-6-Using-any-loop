#include<stdio.h>
int main()
{
    int n,i,x,count=0;
     printf("Enter any number");
     scanf("%d",&n);

     for(i=1;i<=n;i++)
     {
        x=n%i;
        if(x==0)
            count++;
     }   
    if(count==2)
        printf("\n Number is prime");
    else
        printf("\n Number is not prime");
return 0;
}