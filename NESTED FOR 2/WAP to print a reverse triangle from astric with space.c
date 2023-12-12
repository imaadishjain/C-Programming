#include<stdio.h>
int main()
{
    int n,i,k,j;
    printf("Enter a number=");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(k=1;k<=(n-i);k++)
        {
            printf(" ");
        }
        for (j=1;j<=i;j++)
        {
            printf("*");
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
