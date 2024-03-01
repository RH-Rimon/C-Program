#include<stdio.h>
int main()
{
    char ch;

    printf("Enter a Alphabet: \n");
    scanf("%c",&ch);

    printf("The Uppercase letter of %c is : %c\n",ch,ch-32);

    return 0;
}
