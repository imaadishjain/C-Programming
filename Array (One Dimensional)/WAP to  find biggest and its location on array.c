#include<stdio.h>
int main()
{
    int a[10];
    int i,n,b,p=0;
    printf("Enter Size=");
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
            p=i;
        }
    }
    printf("Biggest number=%d and its location  is=%d",b,p);
    return 0;
}
