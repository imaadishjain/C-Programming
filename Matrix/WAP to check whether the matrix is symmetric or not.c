#include<stdio.h>
int main()
{
    int a[10][10],b[10][10];
    int row,col,i,j,t;
    printf("Enter the Row and Coloumn\n");
    scanf("%d%d",&row,&col);
    printf("Enter the Element of Matrix\n");
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
        printf("Matrix is Symmetric\n");
    }
    else
    {
        printf("Matrix is not Symmetric\n");
    }
    return 0;
}
