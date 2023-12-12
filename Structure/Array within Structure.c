#include<stdio.h>
struct student
{
    int roll;
    char name[10];
    int m[3];
    float s,p;
}; //a;
int  main()
{
    struct student a;
    int i;
    printf("Enter the Roll no. and name\n");
    scanf("%d%s",&a.roll,a.name);
    printf("Enter the marks of 3 subject\n");
    for(i=0;i<3;i++)
    {
        scanf("%d",&a.m[i]);
    }
    a.s=0;
    for(i=0;i<3;i++)
    {
        a.s=a.s+a.m[i];
    }
    a.p=a.s/3;
    printf("Roll No.=%d  Name=%s\n",a.roll,a.name);
    printf("Sum=%f\nPercentage=%f" ,a.s,a.p);
    return 0;
}
