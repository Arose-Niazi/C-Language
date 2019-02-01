/* This programme is prepared by (FA18-BSE-010) Arose Niazi on 10/09/2018.
This programme preforms basic addition, subtraction, multiplication, division, remainder
by taking input from user.*/

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
    int a,b; //Declaring two integer variables a and b
    printf("\nPlease enter first number: "); //Asking user to enter first number
    scanf("%d",&a); //This will store the first number in variable 'a'
    printf("Please enter second number: "); //Asking user to enter second number
    scanf("%d",&b); //This will store the second number in variable 'b'
    printf("\nAddition: %d\nSubtraction: %d\nMultiplication: %d\nDivision: %d\nRemainder: %d\n",a+b,a-b,a*b,a/b,a % b);//This preforms all calculations and prints it to user.
    return 0; //Tells the Program the execution was success.
} //Closing brace of function 'main'
