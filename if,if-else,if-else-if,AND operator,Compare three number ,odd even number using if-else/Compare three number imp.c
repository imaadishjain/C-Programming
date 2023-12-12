#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of a=");
    scanf("%d",&a);
    printf("Enter the value of b=");
    scanf("%d",&b);
    printf("Enter the value of c=");
    scanf("%d",&c);
    if (a>b)
    {
        if (a>c)
        {
            printf("a is greatest i.e %d",a);
        }
    }
    else if (b>c)
    {
        printf("b is greatest i.e %d",b);
    }

    else
    {
        printf("c is greatest i.e %d",c);
    }
}
