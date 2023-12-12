#include<stdio.h>
#include<string.h>
int main()
{
    char a[10],b[10];
    printf("Enter first string\n");
    scanf("%s",a);
   printf("Enter second string\n");
    scanf("%s",b);
    strcat(a,b);
    printf("Jointed string=%s",a);
    return 0;
}
