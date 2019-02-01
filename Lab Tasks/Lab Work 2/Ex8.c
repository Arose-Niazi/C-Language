/* This programme is prepared by (FA18-BSE-010) Arose Niazi on 01/10/2018.
This programe tells if number is even or odd and if its divided by 3 does this 10 times*/

/*
Includes:
    stdio.h -> Using for basic input output functions.
*/
#include <stdio.h>

/*
Functions:
    main -> This is called as the starting function by any C Program.
*/
#include <stdio.h>

int main()
{
    int number,loop=1; //Integer to store number and one to control loop
    for(;loop <=10; loop++) //Loop will run 10 times
    {
        printf("Enter number %d: ",loop);//Tells user to enter number
        scanf("%d",&number);//Stores number
        if(!(number % 2)) printf("Even\n"); //Checks if it's even or not
        else printf("Odd\n");//Prints odd if its not even
        if(!(number % 3)) printf("Also divided by 3.\n\n");//Checks if its divided by 3
    }
    return 0;
}

