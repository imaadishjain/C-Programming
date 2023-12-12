#include<stdio.h>
#include<string.h>
int main()
{
    int i,l;
    char a[10];
    printf("Enter your name=");
    scanf("%s",a);
    l=strlen(a);
    for (i=0;i<l;i++)
    {
        printf("%s\n",a);
    }
    return 0;
}
