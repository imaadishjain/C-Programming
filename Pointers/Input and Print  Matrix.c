#include<stdio.h>
int main()
{
    int a[10][10];// int **a;
    int i,j,m,n;
    printf("Enter the row and coloumn\n");
    scanf("%d%d",&m,&n);
    printf("Enter the Elements of Matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",(*(a+i)+j));
        }
    }
    printf("Printing the Element of matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%4d",*(*(a+i)+j));
        }
        printf("\n");
    }
    return 0;
}
