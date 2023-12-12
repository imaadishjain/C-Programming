#include<stdio.h>
int fibcoii(int n);
int main()
{
    int n,t;
    printf("Enter the term\n");
    scanf("%d",&n);
    t=fibcoii(n);
    printf("Term is=%d",t);
    return 0;
}
int fibcoii(int n)
{
    int f=1;
    if(n==0 || n==1)
    {
        f=n;
    }
    else
    {
        f=fibcoii(n-2)+fibcoii(n-1); //Tree Recursion
    }
    return f;
}

