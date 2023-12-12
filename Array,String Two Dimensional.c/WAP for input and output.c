#include<stdio.h>
int main()
{
    char a[10][10];
    int i,n;
    printf("Enter the Size\n");
    scanf("%d",&n);
    printf("Enter names\n");
    for (i=0;i<n;i++)
    {
        scanf("%s",a[i]);
    }
    printf("Your Name\n");
    for (i=0;i<n;i++)
    {
        printf("%s\n",a[i]);
    }
    return 0;
}
