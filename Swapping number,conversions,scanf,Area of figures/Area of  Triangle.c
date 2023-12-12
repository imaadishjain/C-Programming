#include<stdio.h>
main()
{
 float b,h;
 float A;
 printf("Enter the Base and Height of a Triangle=");
 scanf("%f%f",&b,&h);
 A=0.5*b*h; // Yah par 1/2 nahi likh sakta woh 0 dega ga kyuki int/int=int hota ha
 printf("Area of Triangle is Equal to=%f",A);
}
