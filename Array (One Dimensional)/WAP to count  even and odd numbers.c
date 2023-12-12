#include<stdio.h>
int main()
{
    int a[]={3,9,5,6,4};
    int i,n=5,e=0,o=0;
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            e++;
        }
        else
        {
            o++;
        }
    }
    printf("Total no. of even number=%d\n",e);
    printf("Total no. of odd number=%d\n",o); //(n-e)
    return 0;n
}
