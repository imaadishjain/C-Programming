#include<stdio.h>
int main()
{
    int n,t,s=0,p;
    printf("Enter as number=");
    scanf("%d",&n);
    p=n;
    while (n!=0)
    {
        t=n%10;
        s=s*10+t;
        n=n/10;
    }
    if (p==s)
    {
        printf("Number is a Pallindrome number");
    }
    else
    {
        printf("Number is not an Pallindrome number");
    }
        return 0;
    }
