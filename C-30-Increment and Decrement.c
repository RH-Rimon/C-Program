#include<stdio.h>
int main()
{
    int z = 5;

    int result = ++z; // pre-increment

    printf("%d\n",z);
    printf("%d\n",result);

    int p = 8;

    result = p++; //post-increment

    printf("%d\n",p);
    printf("%d\n",result);

    int x = 29;

    result = --x;

    printf("%d\n",x);
        printf("%d\n",result);

        int y = 99;

    result = y--;

    printf("%d\n",y);
        printf("%d\n",result);




    return 0;
}
