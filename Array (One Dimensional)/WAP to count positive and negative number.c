#include<stdio.h>
int main()
{
    int a[]={2,-9,6,-40,8};
    int i,n=5,p=0;
    for(i=0;i<n;i++)
    {
        if (a[i]>0)
        {
            p++;
        }
        else
        {
            continue;
        }
    }
    printf("Total Positive number=%d\n",p);
    printf("Total Negative number=%d\n",(n-p));
    return 0;
}
