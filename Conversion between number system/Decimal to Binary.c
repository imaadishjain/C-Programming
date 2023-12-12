#include<stdio.h>
#include<math.h>
int main()
{
 int i=0,n,t,s=0;
 printf("Enter a Decimal number=");
 scanf("%d",&n);
 while(n!=0)
 {
     t=n%2;
     s=s+t*pow(10,i);
     n=n/2;
     i++;
 }
 printf("Binary number is =%d",s);
 return 0;
}
