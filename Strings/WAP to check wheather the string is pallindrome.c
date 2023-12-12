#include<stdio.h>
#include<string.h>
int main()
{
    char a[10],b[10];
    printf("Enter the name you want to check\n");
    scanf("%s",a);
    strcpy(b,a);
    strrev(a);
    if (strcmp(a,b)==0)
    {
        printf("Its a Pallindrome\n");
    }
    else
    {
        printf("Not a Pallindrome\n");
    }
    return 0;
}
