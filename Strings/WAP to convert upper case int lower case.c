#include<stdio.h>
#include<string.h>
int main()
{
    char a[10];
    printf("Enter your name\n");
    scanf("%s",a);
    strlwr(a);
    printf("Lower case converted string=%s",a);
    return 0;
}
