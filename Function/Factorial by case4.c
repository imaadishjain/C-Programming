#include<stdio.h>
int fact(int a);
int main()
{
    int n,t;
    printf("Enter a number\n");
    scanf("%d",&n);
    t=fact(n);
    printf("Factorial of Two number=%d",t);
    return 0;
}
int fact(int a)
{
    int i,f=1;
    for(i=1;i<=a;i++)
    {
        f=f*i;
    }
    return f;
}

