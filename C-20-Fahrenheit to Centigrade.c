#include<stdio.h>
int main()
{
    double c,f;

    printf("Enter a Fahrenheit temperature: \n");
    scanf("%lf",&f);

    c = (5*f-160)/9;

    printf("The Centigrade Temperature is: %.3lf\n",c);

    return 0;
}

