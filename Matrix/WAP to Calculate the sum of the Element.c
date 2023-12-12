#include<stdio.h>
int main()
{
    int a[10][10]={{10,20,30},{40,50,60}};
    int row=2,col=3,i,j,s=0;
  for(i=0;i<row;i++)
  {
      for(j=0;j<col;j++)
      {
          s=s+a[i][j];
      }
  }
  printf("Sum of all elements of the matrix=%d",s);
  return 0;
}
