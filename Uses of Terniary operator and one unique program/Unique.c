#include<stdio.h>
int main()
{
    int x,y,a=6,b=3,c=2;
    x=a>b>c;// Thing is correct but the way in which its is written is wrong
    y=a>b&&a>c;
    printf("x=%d\n",x);
    printf("y=%d\n",y);
    return 0;
}
/* a>b>c
   6>3>2
   1>2
   0*/
