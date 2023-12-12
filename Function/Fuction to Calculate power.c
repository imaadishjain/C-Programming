#include<stdio.h>
int power(int x,int n); //  forward Declaration
int main()
{
    int a,b,t;
    printf("Enter the Number and the Power\n");
    scanf("%d%d",&a,&b);
    t=power(a,b);
    printf("Power=%d",t);
    return 0;
}
int power(int x,int n) //Fuction Definition
{
    int i,p=1;
    for(i=0;i<n;i++)
    {
        p=p*x;
    }
    return p;
}
