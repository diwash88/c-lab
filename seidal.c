
//Gauss Jacobi Iteration Method
/* Arrange system of linear equations in
diagonally dominant form and convert the
1st equation in tems of 1st variable (f1), 2nd
equation in terms of 2nd variable (f2) and so
on */


#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f1(x,y,z) (15-y-z)/10
#define f2(x,y,z) (24-x-z)/10
#define f3(x,y,z) (33-x-y)/10
int main()
{
float x0=0, y0=0, z0=0, x1, y1, z1, e1, e2,
e3, e;
int i=1;
printf("Enter the allowed error:\n");
scanf("%f", &e);
printf("\ni\tx\ty\tz\n");
do
{
/* Calculation */
x1 = f1(x0,y0,z0);
y1 = f2(x0,y0,z0);
z1 = f3(x0,y0,z0);
printf("%d\t%f\t%f\t%f\n",i, x1,y1,z1);
/* Error */
e1 = fabs(x0-x1);
e2 = fabs(y0-y1);
e3 = fabs(z0-z1);
i++;
/* Set value for next iteration */
x0 = x1;
y0 = y1;
z0 = z1;
}while(e1>e && e2>e && e3>e);
printf("\nSolution: x=%f, y=%f and z =%f\n",x1,y1,z1);
getch();
return 0;
}
