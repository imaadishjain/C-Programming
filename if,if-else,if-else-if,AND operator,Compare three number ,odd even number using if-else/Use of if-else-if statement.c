#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of a=");
    scanf("%d",&a);
    printf("Enter the value of b=");
    scanf("%d",&b);
    if (a>b)
    {
        printf("a is greatest i.e %d",a);
    }
    else if (b>a)
    {
        printf("b is Greatest i.e %d",b);
    }
    else
    {
        printf("a is equal to b");
    }
}
