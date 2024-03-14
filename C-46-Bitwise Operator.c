#include<stdio.h>
int main()
{

    int a = 32,b =12,c;

    c = a&b;
                   /* & - bitwise and
                   | - bitwise or
                   ^ - bitwise Ex-or
                   >> - right shift
                   << - left shift
                   ~ - bitwise not*/
    printf("a&b = %d\n",c);

    c = a|b;
    printf("a|b = %d\n",c);

    c = a^b;

    printf("a^b = %d\n",c);



    return 0;
}
