#include<stdio.h>
int main()
{
    char ch;

    printf("Enter a Lowercase Letter: \n");
    scanf("%c",&ch);

    char upper = toupper(ch);

    printf("The upper letter of %c is : %c\n",ch,upper);
    return 0;
}

