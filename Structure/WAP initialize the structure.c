#include<stdio.h>
struct student
{
    char name[10];
    int roll;
};
int main()
{
    struct student a={"Aadish",1},b={"Sarthak"};
    printf("Enter the Roll no of b\n");
    scanf("%d",&b.roll);
    printf("Printing the details\n");
    printf("%d %s\n",a.roll,a.name);
    printf("%d %s\n",b.roll,b.name);
    printf("Size of Structure=%d",sizeof(a));
    return 0;

}

