//使用求根公式求解
#include <stdio.h>
#include <math.h>
int main() {
    double a,b,c,delta,x1,x2;
    printf("请输入一元二次方程的系数a,b,c\n");
    scanf("%lf %lf %lf",&a,&b,&c);

     delta=b*b-4*a*c;

    if (delta<0)
        printf ("此方程无解！");
    else if(delta==0)
    {
        x1=-b/(2*a);
        printf ("此方程的解为%lf",x1);
    }
    else
    {
        x1=(-b+ sqrt(delta))/(2*a);
        x2=(-b- sqrt(delta))/(2*a);
        printf("此方程的两个解为%lf和%lf",x1,x2);
    }
    printf("    delta 为%lf",delta);
    return 0;
}
