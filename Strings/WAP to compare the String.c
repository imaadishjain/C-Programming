#include<stdio.h>
#include<string.h>
int main()
{
   char a[10],b[10];
   printf("Enter the String a\n");
   scanf("%s",a);
   printf("Enter the String b\n");
   scanf("%s",b);
   if (strcmp(a,b)==0)
   {
       printf("a and b are equal\n");
   }
   else if(strcmp(a,b)>0)
   {
       printf("a is greater than b\n");
   }
   else
   {
       printf("a is lesser than b\n");
   }
   return 0;
}



