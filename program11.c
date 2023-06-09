//solution of non linear equation using Bisection method and regular FALSI method.
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) sin(x)-(1/x)
#define e 0.000001
int main()
{

    float x1,x2,x3,f1,f2,f3;
    printf("Enter two initial guess x1 and x2");
    scanf("%f%f",&x1,&x2);
    do{
        f1=f(x1);
        f2=f(x2);
    }
    while(f1*f2>0);
    printf("    x1\t           x2\t           x3\t           f(x3)\n");
    do{
    x3=(x1+x2)/2;
    printf("%f\t %f\t %f\t %f\n",x1,x2,x3,f3);
    f1=f(x1);
    f2=f(x2);
    f3=f(x3);
    if(f3*f1<0)
        x2=x3;
        else
        x1=x3;

    }
    while(fabs(x2-x1)>e);
    printf("Required root is :%f",x3);
    return 0;
}
