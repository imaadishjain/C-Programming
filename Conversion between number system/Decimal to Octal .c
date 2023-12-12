#include<stdio.h>
#include<math.h>
int main()
{
    int n,s=0,i=0,t;
    printf("Enter a Decimal number=");
    scanf("%d",&n);
    while (n!=0)
    {
        t=n%8;
        s=s+t*pow(10,i);
        n=n/8;
        i++;
    }
    printf("Octal Number is =%d",s);
    return 0;
}
