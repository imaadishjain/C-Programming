#include<stdio.h>
int main()
{
    auto int a=3;
    printf("a(1)=%d\n",a);
    {
      auto int b=5;
      printf("a(2)=%d\n",a);
      printf("b(1)=%d\n",b);
    }
    printf("a(3)=%d\n",a);
    printf("b(2)=%d\n",b); // b is undeclared
    return 0;
}
