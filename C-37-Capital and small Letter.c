#include<stdio.h>
int main()
{
    char ch;

    printf("Enter an Alphabet: \n");
    scanf("%c",&ch);

    if(ch>='a' && ch<='z')
            printf("This is a Small Letter!\n");
    else if(ch>='A' && ch<='Z')
        printf("This is a Capital Letter!\n");

    else
        printf("Enter a valid Alphabet!\n");


    return 0;
}

