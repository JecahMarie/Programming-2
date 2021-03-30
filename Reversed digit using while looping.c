//Reverse number using while loop
#include <stdio.h>

void main()
{
    //get user number
   int num, rev=0,rem;
   printf("Enter a number: ");
   scanf("%d", &num);

   while(num)
   {
       rem=num % 10;
       rev=rev * 10 + rem;
       num=num / 10;
   }
   //Condtitions
    if("Enter == num")
        printf("Reverse number is %d\n", rev);

    else
       printf("The inputted data is Invalid");



   return 0;
}
