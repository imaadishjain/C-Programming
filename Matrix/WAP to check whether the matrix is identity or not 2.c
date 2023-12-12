#include<stdio.h>
int main()
{
    int a[10][10];
    int row,col,i,j,t=0,x=0;
    printf("Enter the row and col\n");
    scanf("%d%d",&row,&col);
    printf("Enter the matrix\n");
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
            if(i==j&&a[i][j]==1)
            {
                t++;
            }
            else
            {
                if(i!=j&&a[i][j]==0)
                {
                    x++;
                }
            }

        }
    }
    if(t==row&&x==(row*col)-row)
    {
        printf("Matrix is Identity\n");
    }
    else
    {
        printf("Matrix is not Identity\n");
    }
    return 0;
}
