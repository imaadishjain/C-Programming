#include<stdio.h>
#include<string.h>
int main()
{
    char a[10];
    printf("Enter your name\n");
    scanf("%s",a);
    strupr(a);
    printf("Upper Case string=%s",a);
    return 0;
}
