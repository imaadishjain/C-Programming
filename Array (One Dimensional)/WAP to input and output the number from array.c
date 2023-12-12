#include<stdio.h>
int main()
{
    int a[10],i,n;
    printf("Enter the size\n");
    scanf("%d",&n);
    printf("Enter the no\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Printing the number\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;

}
