#include<stdio.h>
int main()
{
    int a[]={20,-90,78,65,43};// Initialization
    int i,n=5;
    float s=0,p;
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    p=s/n;
    printf("Sum=%f\n",s);
    printf("Average=%f",p);
    return 0;
}
