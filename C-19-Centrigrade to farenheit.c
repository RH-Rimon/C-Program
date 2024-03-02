#include<stdio.h>
int main()
{
    double c,f;

    printf("Enter a Centigrade Temperature: \n");
    scanf("%lf",&c);

    f = 1.8*c + 32;

    printf("The Fahrenheit Temperature is: %.3lf\n",f);
    return 0;
}

