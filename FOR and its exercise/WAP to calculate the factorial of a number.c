#include<stdio.h>
int main()
{
    int i,n,f=1;
    printf("Enter the number=");
    scanf("%d",&n);
    for (i=1;n>=i;n--)
    {
        f=f*n;
    }
    printf("Factorial=%d",f);
    return 0;
}
