#include<stdio.h>
int main()
{
    int i=1,a=1,t,p;
    t=i++;// t ki value i assign hui uska baad i increase hua
    p=++a;// a ki value sab sa phela increase hui uska baad assign hui
    printf("Post increment=%d\n",t);
    printf("Pre increment =%d",p);
    return 0;
}

/*#include<stdio.h>
int main()
{
    int t,i=1;
    t=i++;// t ma i ki value assign hona ka baad i increase hua ha
    printf("t=%d\ni=%d\n",t,i);
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int t,i=1;
    t=++i;// increase hona ka baad i ki value assign  hui
    printf("t=%d\ni=%d\n",t,i);
    return 0;

}*/
/*#include<stdio.h>
int main()
{
 int i=1,a=1;
printf("Post increment of i=%d\n",i++);// i ki value print hogi uska baad increment hoga
printf("Pre increment of a=%d",++a);// sab sa phele increment hoag uska baad  increment hoga
return 0;
}
*/
