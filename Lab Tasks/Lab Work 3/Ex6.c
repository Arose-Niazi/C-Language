/* This programme is prepared by (FA18-BSE-010) Arose Niazi on 08/10/2018.
This programs take sales and prints the salary */

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
    float sales;
    for(; ;)
    {
        printf("Enter sales in pounds (-1 to end): ");
        scanf("%f",&sales);
        if(sales < 0) break; //Checking if sales less than 0 (As -1 the sentinal value is less than 1, we don't compare values in float)
        printf("Salary is: %0.2f\n",(sales*0.09)+200); //Getting 9% of sales and adding 200 in it
    }
    return 0;
}
