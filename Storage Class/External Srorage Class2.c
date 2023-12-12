#include<stdio.h>
void fun();
int main()
{
    extern int a;//Declare ya Global Variable ha
    printf("a=%d\n",a);
    fun();
    return 0;
}
int a=3;//Initialize
void fun()
{
    printf("a=%d",a);
}


