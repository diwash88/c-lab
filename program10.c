
// Ordinary  differential equation using RK-4 and RK-2 method.
//RK-2

#include<stdio.h>
#include<conio.h>
#include<math.h>
float fun(float x,float y)
{

    float f;
    f=(y-x)/(y+x);
    return f;
}
int main(){
int i,n;
float x0,y0,xp,h,m1,m2;
printf("Enter initial value of x and y:");
scanf("%f%f",&x0,&y0);
printf("Enter x at which y is required ");
scanf("%f",&xp);
printf("Enter stepsize");
scanf("%f",&h);
n=(xp-x0)/h;
for(i=1;i<=n;i++)
{

    m1=fun(x0,y0);

    m2=fun(x0+h,y0+m1*h);
    x0=x0+h;
    y0=y0+(m1+m2)*h*0.5;
    printf("%f\t %f\n",x0,y0);
}
printf("\n Value of y at x=%f is%f",x0,y0);
getch();
return 0;



}

