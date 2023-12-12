#include<stdio.h>
#include"mystring.h"
int main()
{
    int l,p,t;
    char a[10],c[10];
    char b[2][10]={"Elon","Aadish"};N
    printf("Enter Your name\n");
    scanf("%s",a);
    l=stringlength(a);
    printf("\n");
    printf("Copying the String in b=");
    stringcopy(c,a);
    printf("%s\n",c);
    printf("Length Of String=%d\n",l);
    t=stringcompare(a,b[1]);
    if(t==0)
    {
        printf("String are Equal\n");
    }
    else
    {
        if(t>0)
        {
            printf("String a is greater\n");
        }
        else
        {
            printf("String a is Smaller\n");
        }
    }
    p=stringsearch(b,a,2);
    if(p>0)
    {
        printf("Data Found and is position is=%d\n",p);
    }
    else
    {
        printf("Data not found\n");
    }
    printf("\n");
    stringlower(a);
    printf("\n");
    stringupper(a);
    printf("\n");
    stringreverse(a);
    printf("\n");
    stringsort(a);
    return 0;
}
