#include<stdio.h>
#include<math.h>
int main()
{
    int x,i,n,s=1;
    printf("Enter the value of x=");
    scanf("%d",&x);
    scanf("%d",&x);
    printf("Enter the value of n=");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        s=s+pow(x,i);
    }
    printf("SUM of series=%d",s);
    return 0;

}
