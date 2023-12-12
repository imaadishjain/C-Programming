#include<stdio.h>
#include<math.h>
int main()
{
    int n,d,s=0,p,l=0,o,u;
    printf("Enter the number=");
    scanf("%d",&n);
    p=n;
    o=n;
    while (n!=0)
    {
        n=n/10;
        l++;
    }
    while (p!=0)
    {
        d=p%10;
        u=pow(d,l);
        s=s+u; //s=s+pow(d,l);
        p=p/10;
    }
       printf("%d\n",s);
    if (o==s)
    {
        printf("Number is Armstrong number");
    }
    else
    {
        printf("Number is not an Armstrong number");
    }
  return 0;
}
