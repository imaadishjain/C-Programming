#include<stdio.h>
struct student
{
    char name[10];
    int roll;
};
int main()
{
    struct student a[10];
    int i,n,s,t=0;
    printf("Enter the number of Record\n");
    scanf("%d",&n);
    printf("Enter Records\n");
    for(i=0;i<n;i++)
    {
        scanf("%s%d",a[i].name,&a[i].roll);
    }
    printf("Enter the roll no that you want to search\n");
    scanf("%d",&s);
    for(i=0;i<n;i++)
    {
        if(s==a[i].roll)
        {
            printf("Record found\n");
            printf("Name=%s\n",a[i].name);
            printf("Roll No=%d\n",a[i].roll);
            t++;
        }
    }
    if(t==0)
    {
        printf("Record Not Found\n");
    }
    return 0;
}
