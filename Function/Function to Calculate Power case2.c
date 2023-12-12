#include<stdio.h>
int pow()
{
    int x,n,i,p=1;
    printf("Enter the Number and the Power\n");
    scanf("%d%d",&x,&n);
    for(i=1;i<=n;i++)
    {
        p=p*x;
    }
    return (p);
}
int main()
{
    int e;   // x aur n jo yaha par variable who unused ha
    e=pow();
    printf("Power=%d",pow());//or printf("Power=%d",e);
    return 0;
}
