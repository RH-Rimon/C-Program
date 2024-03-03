#include<stdio.h>
int main()
{
    int i;

    printf("Enter a Number: \n");
    scanf("%d",&i);

    if(i>0)
        printf("This is a Positive Number!\n");

    else if(i<0)
        printf("This is a Negative Number!\n");

        else
            printf("This is a Zero!\n");


    return 0;
}
