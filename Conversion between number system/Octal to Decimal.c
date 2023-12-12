#include<stdio.h>
#include<math.h>
int main()
{
    int i=0,n,s=0,t;
    printf("Enter the Octal Number=");
    scanf("%d",&n);
    while (n!=0)
    {
        t=n%10;
        s=s+t*pow(8,i);
        n=n/10  ;
        i++;
    }
    printf("Decimal Number is=%d",s);
    return 0;
}
