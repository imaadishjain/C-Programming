#include<stdio.h>
int main()
{
    int i,s=0;
    for (i=1;i<=10;i+=2)
    {
        s=s+i;
    }
    printf("SUM=%d",s);
    return 0;
}
