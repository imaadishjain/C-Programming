#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10];
    int i,j,m,n,p,q,k;
    printf("Enter the Row and Column of First Matrix \n");
    scanf("%d%d",&m,&n);
    printf("Enter the Row and Column of Second Matrix\n");
    scanf("%d%d",&p,&q);
    if(n!=p)
    {
        printf("Multiplication of these two matrices is not possible");
    }
    else
    {
        printf("Enter the element of first matrix\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("Enter the element of second matrix\n");
        for(i=0;i<p;i++)
        {
            for(j=0;j<q;j++)
            {
                scanf("%d",&b[i][j]);
            }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            c[i][j]=0;
            for(k=0;k<n;k++)
            {
            c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    printf("Product of Two Matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%4d",c[i][j]);
        }
        printf("\n");
    }
    }
    return 0;
}
