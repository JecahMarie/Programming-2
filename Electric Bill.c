#include<stdio.h>
#include<string.h>

int main()
{
    //Checking Credentials
    int id, unit;
    float rate,fchg=0,gamt,amt;
    char Name[23];

    //Get user unfo
    printf("Enter your Name: ");
    scanf("%s",&Name);
    printf("\nInput Costumer ID:");
    scanf("%d", &id);
    printf("\nCustomer Unit consumed: ");
    scanf("%d",&unit);


     if(unit<=249)
         rate=1.50;
     else if(unit>=250 && unit<400)
         rate=1.60;
     else if(unit>450 && unit<600)
         rate=1.85;
     else
         rate=2;

         gamt=unit*rate;
         if (gamt>199)
            fchg=gamt*10/100;
         amt=gamt+fchg;
         if (amt<400)
            amt=100;

    printf("\n[Electric Bill]\n");
    printf("Customer Name                    :%s\n",Name);
    printf("Customer ID#                     :%d\n",id);
    printf("Unit Consumed                    :%d\n",unit);
    printf("Amount Charges @P.%4.2f per unit  :%8.2f\n",rate,gamt);
    printf("Surcharge Amount                 :%8.2f\n",fchg);
    printf("Total Customer Bill              :%8.2f\n",amt);
    printf("\n----------------[Thankyou]-----------------\n");

}
