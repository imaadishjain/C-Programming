#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b;
    char ch;
    printf("Enter the two number=");
    scanf("%d%d",&a,&b);
    printf("+\n-\n*\n/\n%\n0-EXIT\n");
    printf("Enter your choice=");
    fflush(stdin);
    scanf("%c",&ch);
    switch (ch)
    {
        case '0': exit(0);// No use of break
        case '+': printf("ADD=%d",a+b);
                  break;
        case '-': printf("SUBTRACT=%d",a-b);
                break;
        case '*': printf("MULTIPLE=%d",a*b);
                break;
       case '/': printf("DIVIDE=%f",((a*1.0)/b));
                break;
       case '%': printf("MODULUS=%d",a%b);
                break;
       default: printf("WRONG INPUT");
    }
   printf("\nCongratulation ypou have sucessfully completed your calculation\n");
   return 0;
}
