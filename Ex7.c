/* This programme is prepared by (FA18-BSE-010) Arose Niazi on 01/10/2018.
This programe tells if number is even or odd*/

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
{
    int number; //Integer to store number
    printf("Enter number: "); //Telling user to enter number
    scanf("%d",&number);//Storing number
    if(!(number % 2)) printf("Even\n"); //Checking if number is even or not, as modulus of 2 gives 0 only if number is even
    else printf("Odd\n");//Else its false
    return 0;
}

