#include<stdio.h>
#include<math.h>
int main()
{
    int n=1,d,s=0,p,l=0,o,u,x;
    while (n!=0)
    {
    p=n;
    o=n;
    x=n;
    while (n!=0)
    {
        n=n/10;
        l++;
    }
    while (p!=0)
    {
        d=p%10;
        s=s+pow(d,l);
        p=p/10;
    }
    if (o==s)
    {
        printf("%d Number is Armstrong number\n",o);
    }
    n=x;  //These line are important
    s=0;
    l=0;
    n++;
    }
  return 0;
}

