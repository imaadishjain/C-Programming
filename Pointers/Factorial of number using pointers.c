#include<stdio.h>
int main()
{
    int f=1,n,i=1;
    int *p,*q;
    p=&f;
    q=&n;
    printf("Enter the number \n");
    scanf("%d",q);// We can also write &n in place of q
    for(i=1;i<=*q;i++)
    {
        *p=*p*i;
    }
    printf("Factorial of a number=%d",*p);
    return 0;
}
