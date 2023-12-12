#include<stdio.h>
struct student
{
    int roll;
    char name[10];
} a[10];
int main()
{
    //struct student a[5];
    int i;
    printf("Enter the roll no. and name of student\n");
    for(i=0;i<5;i++)
    {
        scanf("%d%s",&a[i].roll,a[i].name);
    }
    printf("Printing the Details\n");
    for(i=0;i<5;i++)
    {
        printf("%d  %s\n",a[i].roll,a[i].name);
    }
    return 0;
}
