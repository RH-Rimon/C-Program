#include<stdio.h>
int main()
{
    int num1,num2;

    printf("Enter The First Number: \n");
    scanf("%d",&num1);

    printf("Enter The Second Number: \n");
    scanf("%d",&num2);

    num1 = num1 - num2;
    num2 = num1 + num2;
    num1 = num2 - num1;

    printf("After Swapping The First Number is : %d\n",num1);
    printf("After Swapping The Second Number is : %d\n",num2);

    return 0;

}
