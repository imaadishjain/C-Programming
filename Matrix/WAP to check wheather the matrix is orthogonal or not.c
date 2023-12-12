#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10];
    int i,j,k,t=0,row,col;
    printf("Enter the Row and Coloumn of a matrix\n");
    scanf("%d%d",&row,&col);
    if(row!=col)
    {
        printf("Matrix is not orthogonal(boz only matrix is only orthogonal");
    }
    else
    {
    printf("Enter the Matrixes\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
            b[i][j]=a[j][i];
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            c[i][j]=0;
            for(k=0;k<row;k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][i];
            }

        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i==j&&c[i][j]==1)
            {
                t++;
            }
        }
    }
    if(t==row)
    {
        printf("Given Matrix is Orthogonal");
    }
    else
    {
        printf("Not a Orthogonal Matrix");
    }
    }
    return 0;
}
