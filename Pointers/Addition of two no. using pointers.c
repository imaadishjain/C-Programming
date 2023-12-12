#include<stdio.h>
int main()
{
    int a=3,b=4,c;
    int *p,*q; // We can also declare like this int* p,q
    p=&a;
    q=&b;
    c=*p+*q;//c=3+4
    printf("Sum of two numbers using pointers=%d",c);
    return 0;
}
