#include<stdio.h>
int main()
{
    int a[10][10],b[10][10];
    int row,col,i,j;
    printf("Enter Row and Column\n");
    scanf("%d%d",&row,&col);
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
    printf("Printing the %dx%d matrix\n",row,col);
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%4d",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
