#include<stdio.h>
void sum()
{
    int a,b,s;
    printf("Enter Two number\n");
    scanf("%d%d",&a,&b);
    s=a+b;
    printf("Sum of a Two number=%d",s);
}
int main()
{
    sum(); //No Argument and No Return
    return 0;
}
