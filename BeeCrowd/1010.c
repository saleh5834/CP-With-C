#include<stdio.h>
int main()
{
    int a,b,x,y;
    double c,z,p;
    scanf("%d%d%lf",&a,&b,&c);
    scanf("%d%d%lf",&x,&y,&z);
    p=(b*c)+(y*z);
    printf("VALOR A PAGAR: R$ %.2lf\n",p);
    return 0;
}
