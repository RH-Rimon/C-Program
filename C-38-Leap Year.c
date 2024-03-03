#include<stdio.h>
int main()
{
    int year;

    printf("Enter a Year: \n");
    scanf("%d",&year);

    if(year%400==0)
        printf("This is a Leap Year!\n");
    else if(year%4==0 && year%100!=0)
        printf("This is a Leap Year!\n");
    else
        printf("This is not a Leap Year!\n");


    return 0;
}

