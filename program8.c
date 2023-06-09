// Euler Method
#include<stdio.h>
#include<conio.h>
#include<math.h>
float function(float x,float y)
{
    float f;
    f=x*y;
    return f;
}
int main()
{
    float x,y,x0,y0,h;
    int n,i;
    printf("Enter initial value of x and y:");
    scanf("%f%f",&x0,y0);
    printf("Enter x at which y is required:");
    scanf("%f",&x);
    printf("Enter step size:");
    scanf("%f",&h);
    n=(x-x0)/h;
    for(i=0;i<n;i++)
    {
        y=y0+h*function(x0,y0);
        x0=x0+h;
        y0=y;
        printf("%f\t %f\n",x0,y);
    }
    printf("Value of y at x is %f and %f",x0,y0);
    getch();
}

