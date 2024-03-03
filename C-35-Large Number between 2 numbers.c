#include<stdio.h>
int main()
{
    int num1,num2;

    printf("Enter a Number: \n");
    scanf("%d",&num1);

    printf("Enter Another Number: \n");
    scanf("%d",&num2);

    if(num1>num2)

        printf("%d is Greater Than %d\n",num1,num2);
    else
        printf("%d is Greater Than %d\n",num2,num1);


    return 0;
}

