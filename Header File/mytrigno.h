
#include<stdio.h>
#include<math.h>
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
int power(float x,int n)
{
    int i,p=1;
    for(i=0;i<n;i++)
    {
        p=p*x;
    }
    return p;
}
float sinhx(float x,int n)
 {
 int i,f;
 float s=0 ;
 for ( i=1;i<= n;i+=2)
 {
 f =fact(i) ;
 s = s+power(x,i)/f;
 }
 return(s);
 }
/*float sinhx(float x,int n)      // CORRECT CODE
{
    int i=1;
    float s=0,f=1;
    while(n!=0)
    {
        f=fact(i);
        s=s+power(x,i)/f;
        i+=2;
        n--;
    }
    return s;
}*/
float coshx (float x ,int n )
 {
 int i ,f;
 float s=1 ;
 for ( i=2;i<=n;i+=2 )
 {
 f = fact(i) ;
 s = s + power(x,i);
 }
 return(s);
 }
/*float coshx(float x,int n)         //CORRECT CODE
{
    int i=2;
    float s=1,f;
    while(n!=1)
    {
        f=fact(i);
        s=s+power(x,i)/f;
        i+=2;
        n--;
    }
    return s;
}*/
float sinx (float x ,int n )
 {
 int i ,f ,t = 2;
 float s =0;
 for ( i =1;i<=n;i+=2 )
 {
 f = fact(i) ;
 s = s + power (-1,t )*power(x,i)/f;
 t++;
 }
 return( s);
 }
/*float sinx(float x,int n)      //CORRECT CODE
{
    int i=1,t=2;
    float s=0,f;
    while(n!=0)
    {
        f=fact(i);
        s=s+power(-1,t)*power(x,i)/f;
        t++;
        i+=2;
        n--;
    }
    return s;
}*/
float cosx(float x,int n )
 {
 int i,f,t=1;
 float s=1 ;
 for ( i =2;i<=n;i+=2)
 {
 f=fact(i);
 s = s + power(-1,t )*power(x,i)/f;
 t++;
 }
 return( s);
}
/*float cosx(float x,int n)         //CORRECT CODE
{
    int i=2,t=1;
    float s=1,f;
   while(n!=1)
   {
       f=fact(i);
       s=s+power(-1,t)*power(x,i)/f;
       t++;
       i+=2;
       n--;
   }
    return s;
}
*/

