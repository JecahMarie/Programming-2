#include <stdio.h>
int addNumbers(int func_num1, int func_num2, int func_num3, int func_num4, int func_num5);

int main()
{
    int num1,num2,num3, num4, num5, sum;

    printf("Enters five numbers: ");
    scanf("%d %d %d %d %d",&num1,&num2,&num3,&num4,&num5);
    //pass arguments
    sum = addNumbers(num1, num2, num3, num4, num5);
    printf("sum = %d",sum);

    return 0;
}

// return value type is int
int addNumbers(int num1, int num2, int num3, int num4, int num5)
{
    int avg=(num1+num2+num3+num4+num5)/5;
    printf ("Average marks %d:",avg);

    return;
}
