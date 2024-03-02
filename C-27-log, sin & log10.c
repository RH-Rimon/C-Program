#include<stdio.h>
#include<math.h>
int main()
{
    double num;

    printf("Enter a Number: \n");
    scanf("%lf",&num);

    double result = log(num);

    printf("log(%lf) =  %.2lf\n",num,result);

    result = log10(num);

    printf("log10(%lf) =  %.2lf\n",num,result);

    result = sin(num);

    printf("sin(%lf) =  %.2lf\n",num,result);

    return 0;
}

