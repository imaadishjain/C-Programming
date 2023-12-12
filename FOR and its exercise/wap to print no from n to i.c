#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the value of i=");
    scanf("%d",&i);
    printf("Enter the value of n=");
    scanf("%d",&n);
    for (i;n>=i;n--)
    {
        printf("%d\n",n);
    }
    return 0;


}
