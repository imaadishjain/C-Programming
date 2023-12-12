#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the value of n=");
    scanf("%d",&n);
    for (i=1;n>=i;n--) // for (;n>=1;n--)
    {
        printf("%d\n",n);
    }
    return 0;
}
