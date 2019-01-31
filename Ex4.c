/* This programme is prepared by (FA18-BSE-010) Arose Niazi on 10/09/2018.
This programme preforms swaps places of two numbers with and without third variable.*/

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
    int a,b,hold; //Declaring three integer variables a,b and hold
    printf("\nPlease enter first number: "); //Tells user to enter first number to be stored in a.
    scanf("%d",&a); //Stores the number in a
    printf("Please enter second number: "); //Tells user to enter second number to be stored in b.
    scanf("%d",&b); //Stores the number in b
    printf("\nBefore Swap: %d %d",a,b); //Prints the numbers values before swap.
    a=a+b; //This adds the value of both a and b in a
    b=a-b; //So no this subtracts a from b which makes the value of old a that we need in b
    a=a-b; //So now if we a-b then we are left with value of b before swap in a now.
    printf("\nAfter Swap: %d %d\n",a,b); //Prints the number values after swap.
    printf("Now swaping using a third variable."); //Now swaping using third variable.
    printf("\nBefore Swap: %d %d",a,b); //Prints the numbers values before swap.
    hold=a; //Hold variable now stores the value of a
    a=b; //a now equals to the value of b
    b=hold; //b is now equal to old value of a i.e value of hold
    printf("\nAfter Swap: %d %d\n",a,b); //Prints the number values after swap.
    return 0; //Tells the Program the execution was success.
} //Closing brace of function 'main'
