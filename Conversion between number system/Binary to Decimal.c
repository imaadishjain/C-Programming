#include<stdio.h>
#include<math.h>
int main()
{
    int n,t,s=0,i=0;
    printf("Enter a Binary  Number=");
    scanf("%d",&n);
    while (n!=0)
    {
        t=n%10;
        s=s+t*pow(2,i);
        n=n/10;
        i++;
    }
    printf("Decimal Number is=%d",s);
    return 0;
}
