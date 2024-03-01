#include<stdio.h>
int main()
{
     char name01[50];

     printf("Enter Your Name: \n");
     gets(name01); //gets is not safe. So we should use fgets.

     printf("HI ");
     puts(name01);

    char name02[50];

    printf("Enter Your Name: \n");
    fgets(name02 , sizeof(name02), stdin);

    printf("Welcome %s\n",name02);

    char ch;

    printf("Enter a Alphabet: \n");
    ch = getchar();

    printf("The Alphabet is: %c\n",ch);

    return 0;
}
