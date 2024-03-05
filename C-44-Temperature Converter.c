#include<stdio.h>
int main()
{

    printf("Temperature Conversion Menu\n");
    printf("  1. Centigrade to Fahrenheit\n");
    printf("  2. Fahrenheit to Centigrade \a\n");
    printf("\n");
        printf("\n");


    int num;
    double temp;
    printf("\t");
    scanf("%d",&num);

    switch(num)
    {
    case 1:
    {
        printf("Enter the Centigrade Temperature: \n");
        scanf("%lf",&temp);
        double result = (1.8*temp) + 32;
        printf("The temperature in Fahrenheit is: %.2lf\n",result);
        break;


    }
    case 2:
    {
        printf("Enter the Fahrenheit Temperature: \n");
        scanf("%lf",&temp);
        double result = (temp-32)/1.8;
        printf("The temperature in celsius is: %.2lf\n",result);
        break;
    }
    default:
        printf("Choice a Right Option\n");
    }


    return 0;
}
