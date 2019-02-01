/* This programme is prepared by (FA18-BSE-010) Arose Niazi on 04/10/2018.
This program uses while loop to calculate and print the sum of even integers 1 - 30 */

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
    int loop=1,sum=0;
    while(loop <= 30)
    {
       if(!(loop %2)) sum+=loop;
       loop++;
    }
    printf("Sum of even numbers from 1-30 is %d",sum);
    return 0;
}
