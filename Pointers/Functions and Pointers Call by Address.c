#include<stdio.h>
void swap(int *p,int *q);
int main()
{
    int a=5,b=2;
    swap(&a,&b); //Call by Address
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    return 0;
}
void swap(int *p,int *q)
{
    int c;
    c=*p;
    *p=*q;
    *q=c;
}
