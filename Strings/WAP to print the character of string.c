#include<stdio.h>
#include<string.h>
int main()
{
    int i,l;
    char a[10];
    printf("Enter Your name=");
    scanf("%s",a);
    l=strlen(a);
    for (i=0;i<l;i++)
    {
        printf("%c\n",a[i]);
    }
    return 0;
}
