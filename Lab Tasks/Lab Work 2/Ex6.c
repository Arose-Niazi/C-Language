/* This programme is prepared by (FA18-BSE-010) Arose Niazi on 01/10/2018.
This programe gets 5 numbers and tells largest and smallest in them*/

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
    int loop=1,hold,largest,smallest;//Declaring variables, one for largest, one for smallest one for holding data and another for controlling loop
    printf("Enter number %d: ",loop); //Getting first number
    scanf("%d",&hold); //Stores number in hold
    smallest=largest=hold; //This stores the hold, which is first number and makes it equal to smallest and largest as that's the only number we have
    for(loop=2; loop <= 5; loop++)//Loop that will run 4 times as we took 1 input already
    {
        printf("Enter number %d: ",loop);//Tells user to enter the number
        scanf("%d",&hold); //Stores the number
        if(hold > largest) largest=hold; //If number is bigger than largest make it equal to largest
        if(hold < smallest) smallest=hold; //If number is smaller than smallest make it equal to smallest
    }
    printf("Largest: %d\nSmallest: %d",largest,smallest);//Printing largest and smallest numbers
    return 0;
}
