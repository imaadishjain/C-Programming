#include<stdio.h>
void sum(int a,int b)
{
    int c;
    c=a+b;
    printf("Sum of Two number=%d",c);
}
int main()
{
    int p,q;
    printf("Enter two number\n");
    scanf("%d%d",&p,&q);
    sum(p,q);
    return 0;
}
