#include<stdio.h>
void fact()
{
    int n,i,f=1;
    printf("Enter the number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf("Factorial of a given number is=%d\n",f);
}
int main()
{
    fact();
    fact();

    return 0;
}
