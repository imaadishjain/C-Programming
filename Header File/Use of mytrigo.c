#include<stdio.h>
#include"mytrigno.h"
int main()
{
    float x,a;
    int n;
    printf("Enter the Number and the termth\n");
    scanf("%f%d",&x,&n);
    a=cosx(x,n);
    printf("Expansion of cosx=%f",a);
    return 0;
}
