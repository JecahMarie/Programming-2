#include <stdio.h>

//Arithmetic numbers
int main()
{
    int a,b,ADD,MUL,DIV,SUB,remainder;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b; ");
    scanf("%d",&b);

    ADD = a+b;
    printf("a+b =%d\n",ADD);

    MUL = a*b;
    printf("a*b = %d\n",MUL);

    SUB= a-b;
    printf("a-b = %d\n",SUB);

    DIV = a/b;
    printf("a/b = %d\n",DIV);

    remainder = a%b;
    printf("%d",remainder);

    return 0;
}
