#include<stdio.h>
int main()
{
    int a,b,i;
    printf("Enter the Two number=");
    scanf("%d%d",&a,&b);
    printf("1.ADD\n 2.SUBTRACT\n 3.MULTIPLE\n 4.DIVIDE\n 5.MODULUS\n");
    printf("Enter your choice=");
    scanf("%d",&i);
    switch (i)
    {
        case 1: printf("ADD=%d",(a+b));
                break;
        case 2: printf("SUBTRACT=%d",(a-b));
                break;
        case 3: printf("MULTIPLE=%d",(a*b));
                break;
        case 4: printf("DIVIDE=%f",((a*(1.0))/b));
                break;
        case 5: printf("MODULUS=%d",(a%b));
                break;
        default : printf("WRONG INPUT");
    }
    return 0;

}
