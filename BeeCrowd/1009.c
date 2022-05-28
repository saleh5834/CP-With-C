#include<stdio.h>
int main()
{
    char name[10];
    double x,y,TOTAL;
    scanf("%s",name);
    scanf("%lf%lf",&x,&y);
    TOTAL=x+(y*15)/100;
    printf("TOTAL = R$ %.2lf\n",TOTAL);
    return 0;
}
