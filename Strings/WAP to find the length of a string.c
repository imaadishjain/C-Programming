#include<stdio.h>
#include<string.h>
int main()
{
    int l;
    char a[10];
    printf("Enter your name=");
    scanf("%s",a);
    l=strlen(a);
    printf("Length of a String=%d",l);
    return 0;

}
