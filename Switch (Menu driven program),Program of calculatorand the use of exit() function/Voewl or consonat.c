#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch;
    printf("Enter your character=");
    fflush(stdin);
    scanf("%c",&ch);
    switch(ch)
    {
        case '0': exit(0);
  /*vimp*/      case 'a': case 'e':case 'i': case 'o':case 'u': case 'A':case 'E': case 'I':case 'O': case 'U': printf("VOWEL");
                break;
        default : printf("Consosnat\n");
    }
    return 0;
}
