#include<stdio.h>
#include"myarray.h"
int main()
{
    int a[10],n,t;
    printf("Enter the Size of Array\n");
    scanf("%d",&n);
    printf("Enter Array\n");
    inputarray(a,n);
    t=secondbiggest(a,n);
    printf("Second Biggest among array is=%d",t);
    return 0;
}
