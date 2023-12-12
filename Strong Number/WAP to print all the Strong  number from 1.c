#include<stdio.h>
int main()
{
    int i,n=1,t,s=0,f=1,p,x;
    while (n!=0)
    {
        p=n;
        x=n;
        s=0;
        while (n!=0)
        {
            t=n%10;
            for (i=t;i>=1;i--)
            {
                f=f*i;
            }
            s=s+f;
            n=n/10;
            f=1;
        }
        n=x;
        n++;
        if (p==s)
        {
            printf("Number %d is a Strong Number\n",p);
        }
        else
        {
            continue;
        }

    }
    return 0;
}

