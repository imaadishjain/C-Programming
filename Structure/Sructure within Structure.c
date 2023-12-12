#include<stdio.h>
struct company
{
    char name[10];
    int code;
    struct branch
    {
        char name1[10]; // name1 ki jagah name bhi use karsakta ha.
        int code1;// code1 ki jagaha code bhi use karsakta ha.
    }b;
}c;
int main()
{
    printf("Enter the  Company name and code\n");
    scanf("%s%d",c.name,&c.code);
    printf("Enter the Branch name and code\n");
    scanf("%s%d",c.b.name1,&c.b.code1);
    printf("Printing the Details\n");
    printf("Comapny name=%s and code=%d\n",c.name,c.code);
    printf("Branch name=%s  and code=%d",c.b.name1,c.b.code1);
    return 0;
}
