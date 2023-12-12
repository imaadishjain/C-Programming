#include<stdio.h>
#include<math.h>

int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
 return f;
}
int  power(int x,int n)
{
    int i,p=1;
    for(i=0;i<n;i++)
    {
        p=p*x;
    }
    return p;
}
float expn (float x,int n)
{
    int i,f;
    float s=1;
    for(i=1;i<=n;i++)
    {
        f=fact(i);
        s=s+power(x,i)/f;
    }
    return s;
}
