//Trapezoidal Rule
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) 1-exp(-x/2)
int main()
{
    float a,b,h,x,ans,sum=0;
    int n;
    printf("Enter initial and final value a and b:\n");
    scanf("%f%f",&a,&b);
    printf("Enter number of segment n:");
    scanf("%d",&n);
    printf("%f",x);
        h=(b-a)/n;
        for(x=a;x<=b;x=x+h)
        {


        if( x==a)
        sum=sum-f(x);
        else if(x==b)
            sum=sum+f(x);
        else
            sum=sum+2*f(x);
        }
    ans=(h/2)*(f(a)+f(b)+sum);
    printf("integral value of f(x) is %f",ans);
    return 0;
}
