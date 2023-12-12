#include<math.h>
int prime(int n)
{
    int i,t=1;
    for(i=2;i<=(n-1);i++)
    {
        if(n%i==0)
        {
            break;
        }
        else
        {
            t++;
        }
    }
    return t;
}
int LCM(int a,int b)
{
    int i=1,m;
    m=a>b?a:b;
    while(1)
    {
        if(m*i%a==0 && m*i%b==0)
        {
           break;
        }
        i++;
    }
    return m*i;
}
int  HCF(int a,int b)
{
    int i=1,h,mi;
    mi=a<b?a:b;
    for(i=1;i<=mi;i++)
    {
        if(a%i==0&&b%i==0)
        {
           h=i;
        }
    }
    return h;
}
int multi(int n,int i)
{
    int m;
    m=n*i;
    return m;
}
int fibcoii(int a,int b)
{
    return (a+b);
}
