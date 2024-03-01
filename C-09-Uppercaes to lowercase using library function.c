#include<stdio.h>
int main()

{
    char ch,lower;

    printf("Enter a Lowercase Letter: \n");
    scanf("%c",&ch);

    lower = tolower(ch);

    printf("The lowercase letter of %c is: %c\n",ch,lower);
    return 0;
}

