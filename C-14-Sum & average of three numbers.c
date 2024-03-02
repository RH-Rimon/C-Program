#include<stdio.h>
int main()

{

    int i,j,k;
    double averg;

    printf("Enter Three Numbers: \n");
    scanf("%d %d %d",&i,&j,&k);

    printf("Sum is: %d\n",i+j+k);

    averg = (i+j+k)/3;

    printf("Average is: %.3lf\n",averg);

    return 0;
}
