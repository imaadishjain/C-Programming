#include<stdio.h>
 int main()
{
    int a,b,c;
    printf("Enter the value of a=");
    scanf("%d",&a);
    printf("Enter the value of b=");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("The Value of a=%d\n",a);
    printf("The Value of b=%d\n",b);
    return 0;
}