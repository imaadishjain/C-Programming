 #include<stdio.h>
 int main()
 {
     int n,m,gcf,min,i;
     printf("Enter First number=");
     scanf("%d",&n);
     printf("Enter Second number=");
     scanf("%d",&m);
     min=(n<m)?n:m;
     for(i=1;i<=min;i++)
     {
         if (n%i==0 && m%i==0)
         {
            gcf=i;
         }
     }
     printf("HCF of %dand%d is =%d",n,m,gcf);
     return 0;
 }
