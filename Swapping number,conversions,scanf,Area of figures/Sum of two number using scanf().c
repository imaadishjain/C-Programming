#include<stdio.h>
main()
{
    int a,b,c;
    printf("Enter the Two number=");
    scanf("%d%d",&a,&b); //scanf() ka format ma escape sequence character use nahi karta
    c=a+b;
    printf("The Sum of two number is=%d",c);
}
