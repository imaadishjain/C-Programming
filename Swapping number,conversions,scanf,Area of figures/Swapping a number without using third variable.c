#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a value a=");
    scanf("%d",&a);
    printf("Enter a vlaue b=");
    scanf("%d",&b);
    printf("New Value by Multiplictaion and division method\n");
    printf("New Value of a=%d\n",(a*b)/a);
    printf("New Value of b=%d\n",(a*b)/b);
    printf("New Value by Addition and subtraction\n");
    printf("New Value of a=%d\n",(a+b)-a);
    printf("New Value of b=%d\n",(a+b)-b);
    return 0;
}
