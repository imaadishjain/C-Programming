                   //WAP to print the number from 1-10 using if()
#include<stdio.h>
int main()
{
    int i=1;
    level:printf("%d\n",i);
    i++;
    if (i<=10)
    {
        goto level;
    }
    return 0;

}
