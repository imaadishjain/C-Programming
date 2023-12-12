#include<stdio.h>

void inputmatrix(int a[10][10],int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}
void printmatrix(int a[10][10],int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }
}
void addmatrix(int a[10][10],int b[10][10],int m,int n,int p,int q)
{
    int i,j,c[10][10];
    if(m!=n&&n!=q)
    {
        printf("Matrixe Canot be added");
    }
    else
    {
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printmatrix(c,m,n);
    }
}
void multimatrix(int a[10][10],int b[10][10],int m,int n,int p,int q)
{
    int i,j,k,c[10][10];
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            c[i][j]=0;
            for(k=0;k<p;k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
            }
        }
        printf("\n");
    printmatrix(c,m,q);
}
