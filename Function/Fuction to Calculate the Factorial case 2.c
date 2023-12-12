#include<stdio.h>
int fact()
{
    int n,i,f=1;
    printf("Enter the Number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return (f);
}
int main()
{
    int f; // We can take same varaible
    f=fact();
    printf("Factorial of a number=%d",f);
    return 0;
}
