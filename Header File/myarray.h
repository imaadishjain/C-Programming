#include<stdio.h>
void inputarray(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void printarray(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}
int arraybiggest(int a[10],int n)
{
    int i,b,s;
    b=a[0];
    for(i=1;i<n;i++)
    {
        if(b<a[i])
        {
            b=a[i];
        }
    return b;
}
int secondbiggest(int a[],int n)
{
    int i,b,s,t;
    b=a[0];
    s=a[1];
    for(i=1;i<n;i++)
    {
       if(b<a[i])
       {
           s=b;
          b=a[i];
       }
       else if(s>a[i])
        {
            s=a[i];
        }
       }
    return s;
}
int arraysmallest(int a[],int n)
{
    int i,s;
    s=a[0];
    for(i=0;i<n;i++)
    {
        if(s>a[i])
        {
            s=a[i];
        }
    }
    return s;
}
int linearsearch(int a[],int n,int x)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            break;
        }
    }
    return i+1;
}
void bubblesort(int a[],int n)
{
    int i,j,t;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    printarray(a,n);
}
