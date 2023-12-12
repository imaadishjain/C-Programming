#include<stdio.h>
int main()
{
    int n=1,t,s=0,p,x;
    while (n!=0)
    {
        p=n;
        x=n;
        while (n!=0)
        {
            t=n%10;
            s=s*10+t;
            n=n/10;
        }
        if (p==s)
        {
            printf("Number %d is a Pallindrome number\n",p);
        }
          n=x;
          s=0;
          n++;
    }
    return 0;
}
