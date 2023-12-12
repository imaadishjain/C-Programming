#include<stdio.h>
void stringcopy(char a[10], char b[10])
{
    int i=0;
    for(i=0;b[i]!='\0';i++)
    {
        a[i]=b[i]; // Back Slash Copy nahi hoga
    }
    a[i]='\0'; // i ki value 6
}
void stringlower( char a [10])
{
    int i;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>=65&&a[i]<=90)
        {
            a[i]=a[i]+32;
        }
    }
    printf("Lower Case String=%s",a);
}
void stringupper(char a[10])
{
    int i;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>=97 && a[i]<=122)
        {
            a[i]=a[i]-32;
        }
    }
    printf("Upper Case String=%s",a);
}
int stringlength( char a[10])
{
    int i=0,t=0;
    for(i=0;a[i]!='\0';i++)
    {
      t++;
    }
    return t;
}
int stringcompare(char a[10],char b[10])
{
    int i=0;
    while (a[i]!='\0' && b[i]!='\0')
    {
        if(a[i]==b[i])
        {
            i++;
        }
        else
        {
            break;
        }
    }
    return (a[i]-b[i]);
}
void stringreverse(char a[10])
{
    int i=0,l;
    char t;
    for(l=0;a[l]!='\0';l++); // VIMP.
    for(i=0;i<(l/2);i++)
    {
        t=a[i];
        a[i]=a[l-i-1];
        a[l-i-1]=t;
    }
    printf("Reversed String=%s",a);
}
int stringsearch(char a[10][10],char b[10],int n)
{
    int i=0,t,p=0;
    for(i=0;i<n;i++)
    {
        if(stringcompare(a[i],b)==0)
        {
            p=i+1;
            break;
        }
    }
    return p;
}
void stringsort(char a[10])
{
    int i=0,j=0,l;
    char t;
    l=stringlength(a);
    for(i=0;i<l-1;i++)
    {
        for(j=0;j<l-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    printf("Sorted String=%s",a);
}

