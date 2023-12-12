#include<stdio.h>
int main()
{
    int i,x,n,p=1;
    printf("Enter the number=");
    scanf("%d",&x);
    printf("Enter the Power=");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
       p=p*x;
    }
    printf("ANS=%ld",p);
    return 0;
}
