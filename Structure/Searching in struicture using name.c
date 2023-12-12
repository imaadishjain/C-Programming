#include<stdio.h>
#include<string.h>
struct student
{
    char name[10];
    int roll;
};
int main()
{
    struct student a[10];
    int i,n,t=0;
    char s[10];
    printf("Enter the no. of record\n");
    scanf("%d",&n);
    printf("Enter the name and Roll no. of %d student\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%s%d",&a[i].name,&a[i].roll);
    }
    printf("Enter the name that you want to search\n");
    scanf("%s",s);
    for(i=0;i<n;i++)
    {
        if(strcmp(s,a[i].name)==0)
        {
            printf("Record is found\n");
            printf("Name=%s\n",a[i].name);
            printf("Roll No=%d\n",a[i].roll);
            t++;
        }
    }
    if(t==0)
    {
        printf("Record not found");
    }
    return 0;
}
