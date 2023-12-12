#include<stdio.h>
int main()
{
    int a[10][10],b[10][10];
    int row,col,i,j,t;
    printf("Enter the Row and Coloumn of Matrix\n");
    scanf("%d%d",&row,&col);
    printf("Enter Matrix\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i==j)
            {
                b[i][j]=1;
            }
            else
            {
                b[i][j]=0;
            }
        }
    }
    t=0;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(a[i][j]==b[i][j])
            {
            t++;
            }
        }
    }
    if(t==row*col)
    {
        printf("Matrix is Identity\n");
    }
    else
    {
        printf("Matrix is not Identity\n");
    }
    return 0;
    }




