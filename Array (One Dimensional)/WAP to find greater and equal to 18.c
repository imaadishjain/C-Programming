#include<stdio.h>
int main()
{
    int a[]={23,18,7,17,45};
    int i,c=0,n=5;
    for(i=0;i<n;i++)
    {
        if(a[i]>=18)
        {
            printf("%d\n",a[i]);
            c++;
        }
        else
        {
            continue;
        }
    }
    printf("Total no. of number greater than equal to 18 are=%d\n",c);
    printf("Total no. of number less than 18 are=%d",(n-c));
    return 0;
}
