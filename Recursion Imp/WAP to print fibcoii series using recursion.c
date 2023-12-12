#include<stdio.h>
int fibcoii(register int x);// Declare
int main()
{
  int n,t;
  register int i;
  printf("Enter the Term\n");
  scanf("%d",&n);
  for (i=0;i<=n;i++)
  {
      t=fibcoii(i);
      printf("%4d",t);
  }
  return 0;
}
int fibcoii(register int x)
{
    register int f=1;
    if(x==0 || x==1)
    {
        f=x;
    }
    else
    {
        f=fibcoii(x-2)+fibcoii(x-1);
    }
    return f;
}



