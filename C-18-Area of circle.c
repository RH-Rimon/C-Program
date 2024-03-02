#include<stdio.h>
int main()
{
    double r;

    printf("Enter The Radius: \n");
    scanf("%lf",&r);

    double area = 3.1416*r*r;

    printf("The Area of Circle is : %.3lf",area);
    return 0;
}

