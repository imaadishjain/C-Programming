/*#include<stdio.h>
int main()
{
    int i=0,l;
    char a[10];
    printf("Enter your name=");
    scanf("%s",a);
    l=strlen(a);
    for (i=(l-1);i>=0;i--)
    {
        printf("%c",a[i]);
    }
    return 0;
}
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char a[10];
    printf("Enter Your Name=");
    scanf("%s",a);
    strrev(a);
    printf("Reverse String=%s",a);
    return 0;
}
