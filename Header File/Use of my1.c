#include<stdio.h>
#include"my1.h"
int main()
{
float r,a;
printf("Enter the Radius of circle\n");
scanf("%f",&r);
a=circle_area(r);
printf("Area of Circle=%f",a);
return 0;
}

