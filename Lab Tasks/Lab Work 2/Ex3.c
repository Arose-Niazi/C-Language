/* This programme is prepared by (FA18-BSE-010) Arose Niazi on 01/10/2018.
This programe calculates discount*/

/*
Includes:
    stdio.h -> Using for basic input output functions.
*/
#include <stdio.h>

/*
Functions:
    main -> This is called as the starting function by any C Program.
*/
int main()
{//Start of main function
    int cost,quantity; //Declaring integers to store per item cost and quantity of item.
    float discount=0.0,total_cost; //Declaring float discount and total cost
    printf("Enter item price per unit in rupees: ");//Tells user to enter price per item
    scanf("%d",&cost); //STORES cost
    if(cost < 1) return printf("Please enter a valid price.\n"); //Prints errors if the cost is invalid and ends execution.
    printf("Enter the quantity of items: ");//Tells user to enter quantity of items
    scanf("%d",&quantity); //Stores quantity
    if(quantity < 1) return printf("Please enter a valid quantity.\n"); //Prints errors if the quantity is invalid and ends execution.
    if(quantity > 1000)//Checks if discount should be given or not
    {
        printf("You have been given 10 percent of discount.\n");//Tells user has been given discount
        discount=0.1;//Stores 10% discount
    }
    total_cost= cost*quantity;//Gets total cost
    total_cost=  (float) total_cost - (total_cost*discount); //Total cost - discount
    printf("Your total cost is: Rs %0.1f. Discount: Rs %0.1f\n",total_cost,(cost*quantity)*discount); //Prints total cost with discount and also tells how much discount user got
    return 0;//Returning that the execution was successful.
}//End of main function

