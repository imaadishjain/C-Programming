#include<stdio.h>
int main()
{
    int n,m,i,max;
    printf("Enter First number=");
    scanf("%d",&n);
    printf("Enter Second number=");
    scanf("%d",&m);
    max=(n>m)?n:m;
    while(1)
    {
        if (max%n==0 && max%m==0)
        {
            break;
        }
        max++;
    }
    printf("LCM of %d,%d=%d",n,m,max);
    return 0;
}
