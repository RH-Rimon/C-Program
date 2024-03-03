#include<stdio.h>
int main()
{
    double marks;

    printf("Enter Your Marks: \n");
    scanf("%lf",&marks);

    if(marks<=32)
        printf("F Grade!\n");

        else if(marks>=79.5 && marks<=100)
        printf("A+ Grade\n");

            else if(marks>=69.5 && marks<=79.4)
            printf("A Grade\n");

                else if(marks>=59.5 && marks<=69.4)
                printf("A- Grade\n");

                    else if(marks>=49.5 && marks<=59.4)
                    printf("B Grade\n");

                        else if(marks>=39.5 && marks<=49.4)
                        printf("C Grade\n");

                            else if(marks>=33 && marks<=39.4)
                            printf("D Grade\n");

                                else if(marks>=0 && marks<=32)
                                printf("F Grade\n");

                                 else

                                    printf("Enter a \"Valid\" Marks!");

    return 0;
}
