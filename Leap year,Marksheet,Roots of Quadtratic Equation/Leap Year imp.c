#include<stdio.h>
int main()
{
    int a;
    printf("Enter a Year=");
    scanf("%d",&a);
    if ((a%4==0 && a%100!=0)|| a%400==0)
    {
        printf("Year You have Entered is a Leap Year\n");
    }

    else
    {
        printf("Year is not a Leap year");
    }
    if (a%400==0)//Easia Year ko Century Leap Year kheta ha
    {
        printf("Congrass its a Century Leap year\n");
    }
}
