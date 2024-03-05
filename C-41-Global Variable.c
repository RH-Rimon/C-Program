#include<stdio.h>

int a = 10;
int main()
{
    printf("%d\n",a);
    display();
    name();

}

void display(){

    printf("This is from Another Function: %d\n",a);

}

void name(){

    printf("This is from Another Function: %d\n",a);

}
