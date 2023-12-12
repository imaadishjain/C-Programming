#include<stdio.h>
main()
{
    float c=2/3;// int/int=int
    float d=2.0/3; // int/float=float
    float e=2%3;// both num and demo is in int
    //float g=2.0%3; error num is in float and % cannot be operat on float
    printf("%f\n",c);
    printf("%f\n",d);
    printf("%f\n",e);
    //printf("%f",g);
}
