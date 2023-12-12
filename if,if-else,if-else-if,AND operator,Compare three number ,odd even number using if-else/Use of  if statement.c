#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the   two numbers=");
    scanf("%d%d",&a,&b);
    if (a>b)
    {
        printf("a is Greatest i.e %d",a);
    }
    if (b>a)
    {
        printf("b is Greatest i.e %d",b);
    }
    if(a==b)//(==) is a realation operator and it is use to compare
    {
        printf("a is equal to b");
    }
    }
