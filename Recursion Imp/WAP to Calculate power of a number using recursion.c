#include<stdio.h>
int power(int x,int n);
int main()
{
    int x,n,t;
    printf("Enter the number and the power\n");
    scanf("%d%d",&x,&n);
    t=power(x,n);
    printf("Answer=%d",t);
    return 0;
}
int power(int x,int n)
{
    int p=1;
    if(n==1)
    {
        p=x;
    }
    else
    {
        p=x*power(x,n-1);
    }
    return p;

}
