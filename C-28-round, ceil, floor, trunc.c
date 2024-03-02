#include<stdio.h>
int main()
{
    double num;

    printf("Enter a Number: \n");
    scanf("%lf",&num);

    double result = round(num); // round add 1 for .5=+

    printf("The Round Value of %lf is: %lf\n",num,result);

    result = trunc(num); // trunc remove number after decimal

    printf("The Trunc Value of %lf is: %lf\n",num,result);

    result = ceil(num);

    printf("The Ceil Value of %lf is: %lf\n",num,result);

    result = floor(num);

    printf("The Floor Value of %lf is: %lf\n",num,result);




    return 0;
}
