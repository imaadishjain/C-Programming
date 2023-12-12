#include<stdio.h>
int main()
{
    int a[10][10];
    int row,col,i,j;
    printf("Enter Row and Column\n");
    scanf("%d%d",&row,&col);
    printf("Enter the element\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Printing the matrix\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }
return 0;
}
