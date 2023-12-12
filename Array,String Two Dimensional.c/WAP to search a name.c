#include<stdio.h>
#include<string.h>
int main()
{
    char a[10][10];
    char s[10];
    int i,n,p,t=0;
    printf("Enter the size=");
    scanf("%d",&n);
    printf("Input the Data\n");
    for(i=0;i<n;i++)
    {
        scanf("%s",a[i]);
    }
    printf("Enter the name you want to search\n");
    scanf("%s",s);
    for(i=0;i<n;i++)
    {
        if(strcmp(a[i],s)==0)
        {
          printf("Name is Found and its position is=%d",i+1);
          t++;
          break;
        }
    }
    if (t==0)
    {
        printf("Not Found\n");
    }
    return 0
}
