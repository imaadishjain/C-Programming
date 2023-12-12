#include<stdio.h>
main()
{
     int  a;
     long int s;// second will in long ints
    printf("Enter your age=");
    scanf("%ld",&a);
    s=(a*365*24*60*60);
    printf("Second is =%ld",s);
}
