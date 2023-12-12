#include<stdio.h>
#include<math.h>
int main()
{
    int i,x,n,f=1;
    float s=1;
    printf("Enter the number=");
    scanf("%d",&x);
    printf("Enter the power=");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        f=f*i;
        s=s+pow(x,i)/f;
    }
    printf("SUM=%f",s);
    return 0;

}
