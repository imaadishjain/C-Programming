#include<stdio.h>
int main()
{
    int a[10][10]={{1,2,3},{4,5,6},{7,8,9}};
    int b[10][10]={{10,20,30},{40,50,60},{70,80,90}};
    int c[10][10];
    int row=3,col=3,i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("Sum of the Two Matrix\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%4d",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
