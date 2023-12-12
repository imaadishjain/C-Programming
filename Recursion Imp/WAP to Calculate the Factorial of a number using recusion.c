#include<stdio.h>
int fact(int n);// Declaration
int main()
{
    int n,t;
    printf("Enter the number\n");
    scanf("%d",&n);
    t=fact(n);
    printf("Factorial of a numbeer=%d",t);
    return 0;
}
int fact(int n)
{
    int f;
    //if(n==0)
    {
        f=1;
    }
   // else
    {
        f=n*fact(n-1);
    }
    return f;
}
