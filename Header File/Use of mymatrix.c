#include<stdio.h>
#include"mymatrix.H" // #include"MYMATRIX.h" #include"myMAtrix.H"
int main()
{
    int a[10][10],b[10][10],m,n,p,q;
    printf("Enter the Row and Coloumn of first matrix\n");
    scanf("%d%d",&m,&n);
    printf("Enter the Matrix 1\n");
    inputmatrix(a,m,n);
    printf("Enter the Row and Coloumn of second matrix\n");
    scanf("%d%d",&p,&q);
    printf("Enter the Matix 2\n");
    inputmatrix(b,p,q);
    printf("Additin of Two matrix\n");
    addmatrix(a,b,m,n);
    printf("Multiplication of Two Matrix\n");
    multimatrix(a,b,m,n,p,q);
    return 0;
}
