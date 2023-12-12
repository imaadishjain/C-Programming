#include<stdio.h>
int main()
{
    int a,b,c,i,n;
    printf("Enter the nth term\n");
    scanf("%d",&n);
    a=0;
    b=1;
    printf("%4d%4d",a,b);
    for(i=1;i<=n-2;i++)
    {
        c=a+b;
        printf("%4d",c);
        a=b;
        b=c;
    }
    return 0;
}
