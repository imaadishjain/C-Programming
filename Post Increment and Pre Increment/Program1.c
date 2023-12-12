#include<stdio.h>
int main()
{
    int a=3,c;
    c=++a + a++;
    printf("c=%d,a=%d",c,a);
    return 0;
}
