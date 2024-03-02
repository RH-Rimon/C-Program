#include<stdio.h>
int main()
{
    int num1,num2;

    printf("Enter First Number: \n");
    scanf("%d",&num1);

    printf("Enter Second Number: \n");
    scanf("%d",&num2);

    int temp = num1;
    num1 = num2;
    num2 = temp;

    printf("After Swapping The First Number is : %d\n",num1);
    printf("After Swapping The Second Number is : %d\n",num2);



    return 0;
}

