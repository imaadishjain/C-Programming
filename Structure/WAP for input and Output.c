#include<stdio.h>
struct student
{
    char name[10];
    int roll;
};
int main()
{
    struct student a,b;
    printf("Enter name and Roll no of first student\n");
    scanf("%s%d",a.name,&a.roll);
    printf("Enter name and Roll no of second student\n");
    scanf("%s%d",b.name,&b.roll);
    printf("Printing the details\n");
    printf("%d %s\n",a.roll,a.name);
    printf("%d %s\n",b.roll,b.name);
    printf("Size of Structure=%d",sizeof(a));
    return 0;

}
