#include<stdio.h>
int sum(int n);
int main()
{
    int n,t;
    printf("Enter the termth\n");
    scanf("%d",&n);
    t=sum(n);
    printf("Sum of n number=%d",t);
    return 0;
}
int sum(int m)
{
   int s=0;
   if(m==0)
   {
       s==0;
   }
   else
   {
      s=m+sum(m-1);
   }
   return s;
}
