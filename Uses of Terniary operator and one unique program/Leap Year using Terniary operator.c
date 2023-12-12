#include<stdio.h>
int main()
{
    int a;
    printf("Enter a Year=");
    scanf("%d",&a);
//(((a%4==0&&a%100!=0)||a%400==0)?printf("Leap Year\n"):printf("Not a Leap Year\n"));
(((a%4==0&&a%100!=0)||a%400==0)?(a%400==0?printf("Century Leap Year"):printf("Normal leap year")):printf("Not a Leap Year\n"));
}
