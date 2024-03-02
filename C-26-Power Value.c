#include<stdio.h>
int main()
{
    int x,y;

    printf("Enter The Base: \n");
    scanf("%d",&x);

    printf("Enter The Power: \n");
    scanf("%d",&y);

    printf("The Value of %d^%d is %lf\n",x,y,pow(x,y));

    return 0;
}

