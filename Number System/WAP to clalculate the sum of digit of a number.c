#include<stdio.h>
int main()
{
    int n,d,s=0;
    printf("Enter the number=");
    scanf("%d",&n);
    while (n!=0)
    {
        d=n%10;// To get the last digit of  n
        s=s+d;// Add  up the digit
        n=n/10;// Reducing the digit
    }
    printf("Sum of digits=%d",s);
    return 0;
}
