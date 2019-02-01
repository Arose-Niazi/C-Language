/* This programme is prepared by (FA18-BSE-010) Arose Niazi on 10/09/2018.
This programme prints number 1-4 using different methods of print.*/

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
    printf("1 2 3 4"); //Method 1:- Prints 1 2 3 4 characters on same line using single printf
    printf("\n%d %d %d %d",1,2,3,4); //Method 2:- same as above but this time it uses format specifiers

    //Method 3:- Same as above but this one uses 4 different print statements.
    printf("\n1");
    printf(" 2");
    printf(" 3");
    printf(" 4");
    return 0; //Tells the Program the execution was success.
} //Closing brace of function 'main'
