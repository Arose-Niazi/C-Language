/* This programme is prepared by (FA18-BSE-010) Arose Niazi on 04/10/2018.
This program uses while loop to calculate and print the product of odd integers 0 - 19 */

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
    int loop=0,product=1;//Initialzing 1 in product so we don't get result 0 each time.
    while(loop <= 19) //Will run the loop 20 times in total
    {
       if((loop %2)) product*=loop; //If it's odd, multiply it.
	   loop++; //Increment in our loop counter
    }
    printf("Product of odd numbers from 0-19 is %d\n",product); //Printing final result
    return 0;
}
