#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,h,i;
    char ch,c;
    do
    {
    printf("C.Area of Circle\nS.Area of Square\nR.Area of Rectangle\nT.Area of Triangle\n5. Exit\n");
    printf("Enter Your Choice=");
    fflush(stdin);
    scanf("%c",&ch);
    switch (ch)
    {
        case '0': exit(0);
        case 'C': printf("To calculate area of circle enter radius=");
                  scanf("%d",&a);
                  printf("\nAREA=%f",(3.14*a*a));
                  break;
        case 'S': printf("To calculate area of square enter its sides=");
                  scanf("%d",&a);
                  printf("\nAREA=%d",(a*a));
                  break;
       case 'R': printf("TO calculate area of rectangle enter its height and breadth=");
                 scanf("%d%d",&a,&b);
                 printf("\nAREA=%d",(a*b));
                 break;
      case 'T': printf("To calculate area of triangle enter its height and base=");
          :case 'i': case 'o'      scanf("%d%d",&a,&b);
                printf("\nArea of Triangle=%f",(0.5*a*b));
                break;
      default : printf("WRONG INPUT");

    }
    printf("\nDo you WANT to do another calculation=");
    fflush(stdin);
    scanf("%c",&c);
}while (c=='y'||c=='Y');
return 0;
}
