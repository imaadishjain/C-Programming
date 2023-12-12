#include<stdio.h>
main()
{
    float p,r,t,SI;
    printf("Enter the Principle=");
    scanf("%f",&p);
    printf("Enter the Rate=");
    scanf("%f",&r);
    printf("Enter the Time=");
    scanf("%f",&t);
    SI=(p*r*t)/100;
    printf("SI is=%f",SI);
}
