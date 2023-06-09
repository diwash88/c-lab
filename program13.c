// using Taylor Series
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) sin(x)+cos(x)+exp(x)-8
#define g(x) cos(x)-sin(x)+exp(x)
#define e 0.000001
int main()
{

    float x1,x2,f1,g1,error;
    printf("Enter one initial guess x1 ");
    scanf("%f",&x1);
    printf("x1\t           x2\t           f1\t           g1\n");
    do{
        f1=f(x1);
        g1=g(x1);
        x2=x1-(f1/g1);
        printf("%f\t %f\t %f\t  %f\n",x1,x2,f1,g1);
        error=x2-x1;
        x1=x2;
    }
    while(fabs(error>e));
    printf("The required root is:%f",x2);
    return 0;
}
