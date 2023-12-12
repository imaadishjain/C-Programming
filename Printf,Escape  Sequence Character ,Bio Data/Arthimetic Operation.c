#include<stdio.h>
main()
{
    int a=3,b=2,c,d,e,f,g,h;
    float i;
    c=a+b;
    d=a-b;
    e=a*b;
    f=a%b;
    g=a/b;
    h=b%a;
    i=b/a;
    printf("Sum=%d\nSubtract=%d\na times b=%d\n",c,d,e);
    printf("a modulus b=%d\na divide b=%d\nb modulus a=%d\nb divide a=%f",f,g,h,i);


}
