//Simple Array login program
#include <stdio.h>


int main()
{  ///predifined variables
  int ID,Pin,Acc [3][2]={2222,3333,4444,5555,5432};

  ///get user info
  printf("Enter ID number: ");
 scanf("%d",&ID);
  printf("Enter PIN: ");
 scanf("%d",&Pin);

  //checking accounts
  if(ID==Acc[0][0], Pin==Acc[0][1])
    {
    printf("You're successfully logged in\nID#: %d",ID);
    }
    else if(ID==Acc[1][0], Pin==Acc[1][1])
    {
    printf("You're successfully logged in\nID#: %d",ID);
    }
    else if(ID==Acc[2][0], Pin==Acc[2][1])
    {
    printf("You're successfully logged in\nID#: %d",ID);
    }
    else

    printf("Invalid ID/PIN!");



  return 0;
}
