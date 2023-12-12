#include<stdio.h>
#include<math.h>
int main()
{
    float  a,b,c,x,y,d;
    printf("Enter a,b,c=");
    scanf("%f%f%f",&a,&b,&c);
    d=(b*b-4*a*c);
    if (d<0)
    {
        printf("ROOT are imaginary");
    }
    else
    {
        x=((-b+sqrt(d))/(2*a));
        y=((-b-sqrt(d))/(2*a));
        printf("First Root=%f\n",x);
        printf("Second Root=%f\n",y);
    }

}
