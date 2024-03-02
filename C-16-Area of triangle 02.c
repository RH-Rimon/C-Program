#include<stdio.h>
int main()
{
    double a,b,c;

    printf("Enter a Side: \n");
    scanf("%lf",&a);

    printf("Enter Another Side: \n");
    scanf("%lf",&b);

    printf("Enter the Last Side: \n");
    scanf("%lf",&c);

    double s = (a+b+c)/2;

    double area = sqrt(s*(s-a)*(s-b)*(s-c));

    printf("The Area is: %.3lf",area);
    return 0;
}

