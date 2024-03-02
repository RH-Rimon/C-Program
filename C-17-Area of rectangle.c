#include<stdio.h>
int main()
{
    double length,width;

    printf("Enter the Length: \n");
    scanf("%lf",&length);

    printf("Enter the Width: \n");
    scanf("%lf",&width);

    printf("The Area of Rectangle is: %.3lf\n",length*width);

    return 0;
}

