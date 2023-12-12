#include<stdio.h>
#include<string.h>
int main()
{
    char a[10],b[10];
    printf("Enter Your Name=");
    scanf("%s",a);
    strcpy(b,a);// Jisma Copy karna ha usko phele likho aur jo copy hona ha usko baad ma
    printf("a=%s\nb=%s",a,b);
    return 0;
}
