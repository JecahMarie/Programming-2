//Simple login program using 2D array
#include <stdio.h>

// credentials
int check_info(int id_numbers, int pins);

void login(int login_status,int id_number);

int main()
{
    //First variables
    int id_number, temp_pin, temp_status;

    //Get user info
    printf("Enter Your ID NUMBER: ");
    scanf("%d", &id_number);

    printf("Enter Your PIN: ");
    scanf("%d", &temp_pin);

    //pass arg
    temp_status = check_info(id_number,temp_pin);

   //pass return value
    login(temp_status,id_number);

    return 0;
}

int check_info(int id_numbers, int pins)
{
    //predifined variables
    int
    id_number_0001 = 0001, pin_1 = 3333,
    id_number_0011 = 0011, pin_2 = 4444,
    id_number_1100 = 1100, pin_3 = 5555;

    //checks the pass arg is valid
    //if the id_number and pin is true, use AND then it will return 1;
    if (id_numbers == id_number_0001 && pins == pin_1)
    {
        return 1;
    }

    else if (id_numbers == id_number_0011 && pins == pin_2)
    {
        return 1;
    }

    else if (id_numbers == id_number_1100 && pins == pin_3)
    {
        return 1;
    }
    // return 2 if either id or pass is not true
    else
    {
        return 2;
    }

}

void login(int login_status,int id_number)
{
    // tell the user success msg if value is return 1
    if(login_status == 1)
    {
        printf("\nYou have successfully logged In!\n ID#: %d",id_number);
    }
    else
    {
       printf("\nInvalid ID/PIN!");
    }
}
