#include<stdio.h>
int main()
{
    int num1,num2,i;
    printf("\n Enter frst value");
    scanf("%d",&num1);
    printf("\n Enter second value");
    scanf("%d",&num2);

    for(i=2;i<=num1*num2;i++)
    {
        if(i%num1==0 && i%num2==0)
            break;
    }
    printf("\n LCM of %d & %d is %d",num1,num2,i);
return 0;
}