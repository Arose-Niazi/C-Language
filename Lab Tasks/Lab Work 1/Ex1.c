/* This programme is prepared by (FA18-BSE-010) Arose Niazi on 10/09/2018.
This programme prints different shapes.*/

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
    printf("1.\n  *\n ***\n*****\n ***\n  *\n"); //Prints shape 1, \n is used for new line.
    printf("2.\n**********\n*\t *\n*\t *\n*\t *\n**********\n"); //Prints shape 2, \t is used for tabbing.
    printf("3.\n*\n**\n***\n****\n*****\n"); //Prints shape 3
    printf("4.\n    *\n   **\n  ***\n ****\n*****\n"); //Prints shape 4
    printf("5.\n*****\n****\n***\n**\n*\n"); //Prints shape 5
    printf("6.\n    *****\n****\n***\n**\n*\n"); //Prints shape 6
    return 0; //Tells the Program the execution was success.
} //Closing brace of function 'main'
