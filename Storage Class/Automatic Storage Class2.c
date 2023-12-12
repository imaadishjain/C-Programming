#include<stdio.h>
void  fun();
int main()
{
    auto int a=4;
    fun();
    return 0;
}
void fun()
{
    printf("%d",a);
}
