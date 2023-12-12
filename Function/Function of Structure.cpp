#include<stdio.h>
struct student
{
    char name[10];
    int roll;
};
void  inputstructure(struct student &i)
{
    printf("Enter the Student name and Roll  no.\n");
    scanf("%s%d",i.name,&i.roll);
}
void printstructure(struct student &p)
{
    prinntf("%s%d",p.name,p.roll);
}

int main()
{
    struct student a;
    inputstructure(a);
    printstructure(a);
    return 0;
}
