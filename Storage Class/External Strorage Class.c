#include<stdio.h>
int a=3; //global and full declaration is extern int a=3;
void fun();
int main()
{
    printf("%d\n",a);
    fun();
    printf("%d\n",a);
    return 0;
}
void fun()
{
    int a=4; // Local Variable
    printf("%d\n",a); // Local Variable>Global Variable
}
