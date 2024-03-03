#include<stdio.h>
int main()
{
    char ch;

    printf("Enter a Alphabet: \n");
    scanf("%c",&ch);

    if(ch =='a' || ch=='e' || ch=='i' || ch=='o'  || ch=='u')
        printf("It's a Vowel!\n");
    else if (ch =='A' || ch=='E' || ch=='I' || ch=='O'  || ch=='U')
        printf("It's a Vowel!\n");
    else
        printf("It's a Consonant!\n");


    return 0;
}

