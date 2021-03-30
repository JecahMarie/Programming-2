#include <stdio.h>
#include <conio.h>

int main()
{
int num;

printf("Enter any number: ");
scanf("%d", &num);

switch (num > 0)
{
case 1:
printf("The integer is a positive number.");
break;

case 2:
printf("The integer is a negative number.");
break;

default:
printf("The inputted data is Invalid.");
}

return 0;
}
