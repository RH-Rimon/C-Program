#include<stdio.h>
int main()
{
    int num1,num2;

    printf("Enter Two Numbers: \n");
    scanf("%d %d",&num1,&num2);

    int result = num1>num2?num1:num2;

    printf("Largest Number: %d\n",result);



    return 0;
}
