#include<stdio.h>
#include<conio.h>
#include<math.h>
#define g(x) 1/sqrt(1+x)
#define e 0.000001
int main()
{

    float x1,x2,g1,error;
    printf("Enter any intial number x1\n");
    scanf("%f",&x1);

    do{
        x2=g(x1);

        g1=x2;
        error=x1-x2;
       x1=x2;

    }
        while(fabs(error)>e);
        printf("rootis %f",x2);


    return 0;
}
