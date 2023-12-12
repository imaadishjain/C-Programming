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
    if (a>b&&a>c)
    {
        printf("a is Greatest i.e %d",a);
    }
   else if (b>a && b>c)
    {
        printf("b is Greatest i.e %d",b);
    }
    else if (c>a&&c>b)
    {
        printf("c is Greatest i.e %d",c);
    }
    else if (a==b&&a>c)
    {
      printf("a and b are equal and greater than c");
    }
    else if (b==c&&b>a)
    {
        printf("b are  equal to c and greater than a");
    }
    else if (a==c&&c>b)
    {
        printf("a and c are equal and greater than b");
    }
    else
    {
        printf("a,b,c are equals");
    }



}
