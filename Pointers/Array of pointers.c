#include<stdio.h>
int main()
{
    int a=5,b=3,c=2,i;
    int *p[10]; //Array Of pointers
    p[0]=&a;
    p[1]=&b;
    p[2]=&c;
    for(i=0;i<3;i++)
    {
        printf("%d\n",*p[i]);
    }
    return 0;
}
