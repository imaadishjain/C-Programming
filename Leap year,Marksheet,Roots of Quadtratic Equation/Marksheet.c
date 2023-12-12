#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,i,j,k,l;
    float  x;
    printf("Enter the marks of maths(mid sem(out of 10),Practical(out of 10),End sem(out of 80))\n");
    scanf("%d%d%d",&a,&b,&c);
    printf("Enter the marks of physics(mid sem,Practical,End sem\n");
    scanf("%d%d%d",&d,&e,&f);
    printf("Enter the marks of chemistry(mid sem,Practical,End sem\n");
    scanf("%d%d%d",&g,&h,&i);
    printf("Enter the marks of english(mid sem,Practical,End sem\n");
    scanf("%d%d%d",&j,&k,&l);
    printf("\t\t\t\t********************************MARK SHEET*******************************************\n");
    printf("\t\t\t\tName=Aadish Jain\t\t\tRoll no.-021IT211001\n");
    printf("\t\t\t\tCollege=J.E.C   \t\t\tD.O.B=17 JAN 2003\n");
    printf("\t\t\t      MID SEM\t\t\t\tPRACTICAL\t\tEND SEM\t\tFINAL MARKS\n");
    printf("\t\tMATHEMATCIS\t%d\t\t\t\t    %d\t\t\t  %d\t\t  %d\n",a,b,c,(a+b+c));
    printf("\t\tPHYSICS    \t%d\t\t\t\t    %d\t\t\t  %d\t\t  %d\n",d,e,f,(d+e+f));
    printf("\t\tCHEMISTRY  \t%d\t\t\t\t    %d\t\t\t  %d\t\t  %d\n",g,h,i,(g+h+i));
    printf("\t\tENGLISH    \t%d\t\t\t\t    %d\t\t\t  %d\t\t  %d\n",j,k,l,(j+k+l));
    x=((a+b+c+d+e+f+g+h+i+j+k+l)/400.0)*100;//V.IMP Can also be written as x=((a+b+c+d+e+f+g+h+i+j+k+l)/4.0);
    printf("\t\t\t\tPERCENTAGE=%f\n",x);
    if (x>100)
    {
        printf("Wrong Input\n");
    }
     else if (x>90&& x<=100)
    {
        printf("\t\t\t\tGRADE=A++\t\t\t\t\tTEACHER SIGNATURE__________");
    }
    else if (x>80 && x<=90)
    {
        printf("\t\t\t\tGRADE=A+ \t\t\t\t\tTEACHER SIGNATURE__________");
    }
    else if (x>70 && x<=80)
    {
        printf("\t\t\t\tGRADE=A  \t\t\t\t\tTEACHER SIGNATURE__________");
    }
    else if (x>60 && x<=70)
    {
        printf("\t\t\t\tGRADE=B+ \t\t\t\t\tTEACHER SIGNATURE__________");
    }
    else if (x>50 && x<=60)
    {
        printf("\t\t\t\tGRADE=B  \t\t\t\t\tTEACHER SIGNATURE__________");
    }
    else if (x>40 && x<=50)
    {

        printf("\t\t\t\tGRADE=C  \t\t\t\t\tTEACHER SIGNATURE__________");
    }
    else
    {
        printf("\t\t\t\tGRADE=F  \t\t\t\t\tTEACHER SIGNATURE__________");
    }
    printf("\t\t\t\t***************************************************************************************************\n");

}
