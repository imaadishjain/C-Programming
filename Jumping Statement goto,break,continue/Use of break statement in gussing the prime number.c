#include<stdio.h>
int main()
{
    int n,i,t=1;// t KI VALUE 1 DEGA TABHI 2 PRIME HOGA
    printf("Enter the number=");
    scanf("%d",&n);
    for (i=2;i<=(n-1);i++)
    {
        t=n%i;
        if  (t==0)
        {
            break;
        }
    }
    if (t!=0)
    {
        printf("Prime number");
    }
    else
    {
        printf("Not a Prime Number");
    }
    return 0;
}
