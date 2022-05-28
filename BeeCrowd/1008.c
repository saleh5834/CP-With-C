#include<stdio.h>
int main()
{
    int x,y;
    double z,SALARY;
    scanf("%d%d",&x,&y);
    scanf("%lf",&z);
    SALARY=y*z;
    printf("NUMBER = %d\n",x);
    printf("SALARY = U$ %.2lf\n",SALARY);
    return 0;
}
