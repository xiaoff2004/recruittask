//ʹ�������ʽ���
#include <stdio.h>
#include <math.h>
int main() {
    double a,b,c,delta,x1,x2;
    printf("������һԪ���η��̵�ϵ��a,b,c\n");
    scanf("%lf %lf %lf",&a,&b,&c);

     delta=b*b-4*a*c;

    if (delta<0)
        printf ("�˷����޽⣡");
    else if(delta==0)
    {
        x1=-b/(2*a);
        printf ("�˷��̵Ľ�Ϊ%lf",x1);
    }
    else
    {
        x1=(-b+ sqrt(delta))/(2*a);
        x2=(-b- sqrt(delta))/(2*a);
        printf("�˷��̵�������Ϊ%lf��%lf",x1,x2);
    }
    printf("    delta Ϊ%lf",delta);
    return 0;
}
