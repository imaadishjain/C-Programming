#include<stdio.h>
int sum(int x,int y)
{
    int s;
    s=x+y;
    return s;
}
int main()
{
    int a,b,s;
    printf("Enter Two number\n");
    scanf("%d%d",&a,&b);
    s=sum(a,b);
    printf("Sum of two number=%d",s);
    return 0;
}
