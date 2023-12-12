#include<stdio.h>
void fact(int x);
int main()
{
    int n;
    printf("Enter the Number\n");
    scanf("%d",&n);
    fact(n);
    return 0;
}
void fact(int x)
{
    int i,f=1;
    for(i=1;i<=x;i++)
    {
        f=f*i;
    }
    printf("Factorial=%d",f);
}
