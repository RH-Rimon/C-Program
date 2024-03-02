#include<stdio.h>
#include<math.h>
int main()
{
    double x1,x2,a,b,c,p;

    printf("Enter the Value of a, b & c: \n");
    scanf("%lf %lf %lf",&a,&b,&c);


    p = sqrt(b*b - 4*a*c);

    x1 = (-b + p)/(2*a);
    x2 = (-b - p)/(2*a);

    printf("The Value of X1 = %.3lf\n",x1);
    printf("The Value of X2 = %.3lf\n",x2);

    return 0;
}
