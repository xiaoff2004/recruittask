#include <stdio.h>

int main() {
    int a;
    printf("������7�µ�����\n");
   scanf("%d",&a);
   if(a<1||a>31)
   {
       printf ("�����������");
   }
   else
   {
       switch(a%7)
       {
           case 4 :printf ( "Sun  Mon Tue Wed Thu Fri Sat\n-------------------------------------------------\n%3d",a);break;
           case 5 :printf ( "Sun  Mon Tue Wed Thu Fri Sat\n-------------------------------------------------\n%11d",a);break;
           case 6 :printf ( "Sun  Mon Tue Wed Thu Fri Sat\n-------------------------------------------------\n%19d",a);break;
           case 0 :printf ( "Sun  Mon Tue Wed Thu Fri Sat\n-------------------------------------------------\n%27d",a);break;
           case 1 :printf ( "Sun  Mon Tue Wed Thu Fri Sat\n-------------------------------------------------\n%35d",a);break;
           case 2 :printf ( "Sun  Mon Tue Wed Thu Fri Sat\n-------------------------------------------------\n%43d",a);break;
           case 3 :printf ( "Sun  Mon Tue Wed Thu Fri Sat\n-------------------------------------------------\n%51d",a);break;

       }
   }





    return 0;
}
