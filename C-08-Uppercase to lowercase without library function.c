#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a Uppercase Letter: \n");
    scanf("%c",&ch);

    printf("The Lowercase Letter of %c is :%c\n",ch,ch+32);

    return 0;
}
