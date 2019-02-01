/* This programme is prepared by (FA18-BSE-010) Arose Niazi on 01/10/2018.
This programe calculates Electric city bill*/

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
	float units,perunit_price; //Declaring float variable units to store users consumed units and to store price per unit
	int subcharge;//Declaring integer variable to store sub charge

	printf("Enter the amount of units consumed: ");//Tells user that they need to enter units consumed.
	scanf("%f",&units);//Takes input from the user and store it units var.
	subcharge=(units <= 300)? 0: 5; //Calculating subcharge using ternary operators.
	perunit_price=(units <= 300)? 3.0: 3.5; //Calculating per per unit using ternary operators.
    printf("Your bill is: %0.2f\n",(units*perunit_price)+(5.0/100.0)*(units*perunit_price));//Calculating and prinitng the bill of user.
    return 0;//Returning that the execution was successful.
}//End of main function
