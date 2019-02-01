/* This programme is prepared by (FA18-BSE-010) Arose Niazi on 10/09/2018.
This programme preforms calculation of area and perimeter of triangle.*/

/*
Includes:
    stdio.h -> Using for basic input output functions.
*/
#include <stdio.h>

/*
Functions:
    main -> This is called as the starting function by any C Program.
*/
int main() //Function main
{ //Opening brace of function 'main'
    int a,b,c; //Declaring 3 integer variables a b c
    NumberOne:printf("\nPlease enter triangle height: ");//Tells user to enter height, NumberOne: is label that we use in goto statement.
    scanf("%d",&a); //Stores the hight in variable a.
    if(a <= 0) //Checks if height is equal or less than 0
    {
        printf("Please enter a number more than 0..."); //Prints error message.
        goto NumberOne; //Sends back the control to line where we created label NumberOne:
    }
    NumberTwo:printf("Please enter triangle base: "); //Tells user to enter base, NumberTwo: is label that we use in goto statement.
    scanf("%d",&b); //Stores the base in variable b.
    if(b <= 0) //Checks if base is equal or less than 0
    {
        printf("Please enter a number more than 0..."); //Prints error message.
        goto NumberTwo; //Sends back the control to line where we created label NumberTwo:
    }
    NumberThree:printf("Please enter triangle length: "); //Tells user to enter length, NumberThree: is label that we use in goto statement.
    scanf("%d",&c); //Stores the length in variable c.
    if(c <= 0) //Checks if length is equal or less than 0
    {
        printf("Please enter a number more than 0..."); //Prints error message.
        goto NumberThree; //Sends back the control to line where we created label NumberThree:
    }
    printf("\nArea: %0.2f\nPerimeter: %d\n",0.5*(a*b), a+b+c); //Calculates and Prints area and perimeter, %0.2f tells the it should be upto 2 decimal places
    return 0; //Tells the Program the execution was success.
} //Closing brace of function 'main'

