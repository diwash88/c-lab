// Simpson 3/8 rule
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) 1-exp(-x/2)
int main()
{
    float a,b,h,x,ans,sum=0;
    int n,i;
    printf("Enter initial and final value a and b:\n");
    scanf("%f%f",&a,&b);
    printf("Enter number of segment n:");
    scanf("%d",&n);

        h=(b-a)/n;
        for(i=1;i<n;i++)
        {

        x=a+i*h;
        if( i%3==0)
        sum=sum+2*f(x);

        else
            sum=sum+3*f(x);
        }
    ans=(3*h/8)*(f(a)+f(b)+sum);
    printf("integral value of f(x) is %f",ans);
    return 0;
}
