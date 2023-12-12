#include<stdio.h>
#include"mynormal.h"
int main()
{
    int i,n,a,n1,n2,b,c;
    printf("1.Prime Number\n2.LCM\n3.HCF\n4.Multiplication Table\n5.Fibcoiinii Series\n");
    printf("Enter Choice\n");
    scanf("%d",&i);
    switch(i)
    {
        case 1:
                printf("Prime Number\n");
                printf("Enter Number\n");
                scanf("%d",&n);
                a=prime(n);
                if(a>=1)
                {
                    printf("Number is Prime Number");
                }
                else
                {
                    printf("Number is not Prime");
                }
                break;
        case 2:
                printf("LCM of two number\n");
                printf("Enter Two number\n");
                scanf("%d%d",&n1,&n2);
                a=LCM(n1,n2);
                printf("LCM of two number is=%d",a);
                break;
        case 3:
                printf("HCF of two number\n");
                printf("Enter Two number\n");
                scanf("%d%d",&n1,&n2);
                a=HCF(n1,n2);
                printf("HCF of two number is=%d",a);
                break;
        case 4:
                printf("Multiplication Table\n");
                printf("Enter the number\n");
                scanf("%d",&n);
                for(i=1;i<=10;i++)
                {
                    a=multi(n,i);
                    printf("%4dx%d=%d\n",n,i,a);
                }
                break;
      case 5:  a=0,b=1;
               printf("Fibconii Series\n");
               printf("Enter the number of term\n");
               scanf("%d",&n);
               printf("%d %d",a,b);
               for(i=1;i<=(n-2);i++)
               {
                  c=fibcoii(a,b);
                  printf(" %d",c);
                  a=b;
                  b=c;
               }
               break;
      default: printf("Invalid Choice");
    }
    return 0;
}
