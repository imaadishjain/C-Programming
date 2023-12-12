#include<stdio.h>
int sum()
{
    int a,b,s;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    s=a+b;
    return (s);
}
int main()
{
    int t;
    t=sum();
    printf("Sum of Two Numbers=%d",t);
    return 0;
}
