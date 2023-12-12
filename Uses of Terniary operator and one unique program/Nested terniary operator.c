#include<stdio.h>
int main()
{
    int a=5,b=3,c=8,d;
    d=(a>b?(a>c?3:4):b>6?6:8);
    printf("d=%d",d);
    return 0;
}
