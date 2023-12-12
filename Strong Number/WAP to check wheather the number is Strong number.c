#include<stdio.h>
int main()
{
    int n,t,f=1,i,p,s=0;
    printf("Enter a number=");
    scanf("%d",&n);
    p=n;
    while (n!=0)
    {
        t=n%10;
        for (i=t;i>=1;i--)
        {
            f=f*i;
        }
        s=s+f;
        n=n/10;
        f=1;
 }
  if (p==s)
  {
      printf("Number is Strong Number\n");
  }
  else
  {
      printf("Number is not a Strong Number\n");
  }
 return 0;

}
