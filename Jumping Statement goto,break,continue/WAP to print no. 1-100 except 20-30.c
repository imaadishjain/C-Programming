#include<stdio.h>
int main()
{
    int i;
    for (i=1;i<=100;i++)
    {
        if((i>=20 && i<=30))// Agar isma continue use nahi karna hota toh if(!(i>=20 &&i<=30)) kardeta
        {
            continue;
        }
        printf("%d\n",i);
    }

}
