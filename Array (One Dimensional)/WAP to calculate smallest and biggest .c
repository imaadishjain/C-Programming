#include<stdio.h>
int main()
{
    int a[10];
    int n,i,b,s;
    printf("Enter the size=");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    b=a[0];
    for (i=0;i<n;i++)
    {
        if(b<a[i])
        {
            b=a[i];
        }
    }
    s=a[0];
    for (i=0;i<n;i++)
    {
        if(s>a[i])
        {
        s=a[i];
        }
    }
    printf("Biggest number=%d\n",b);
    printf("Smallest number=%d",s);
    return 0;
}
