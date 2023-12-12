#include<stdio.h>
int main()
{
    float a=3.5,b=2.5,c;
    float *p,*q;// We can also initialse as float* p,q
    p=&a;
    q=&b;
    c=*p/(*q);// Imp paranthesis is important because without paranthesis it is a multi line comment
    printf("Division of two float numbers using pointers=%f",c);
    return 0;
}
