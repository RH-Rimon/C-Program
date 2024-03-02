#include<stdio.h>
int main()
{
    double a,b;

    printf("Enter a Base: \n");
    scanf("%lf",&a);

    printf("Enter a Height: \n");
    scanf("%lf",&b);

    double area = 0.5*a*b;

    printf("The Area pf Triangle is: %.3lf\n",area);

    return 0;
}
