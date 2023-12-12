#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter i=");
    scanf("%d",&i);
    printf("Enter n=");
    scanf("%d",&n);
    while (n>=i)
    {
        printf("%d\n",n);
        n--;
    }
    return 0;

}

