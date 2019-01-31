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
    float invesment,total_EY=0;//Creating float vars investment, and other to store the total money in bank.
    int year,max_years,loop; //Using this to control loop and see year.. max_years to store how many years user wants to see
    printf("Enter your investment: $");//Tells user to enter their investment.
    scanf("%f",&invesment);//stores users investment
    printf("Enter years: ");//Tells user to enter their investment.
    scanf("%d",&max_years);//stores users investment
    printf("Year\t\tAmount on deposit\n"); //Prints table header
    for(year=1; year <=max_years; year++)//Loop runs for max years
    {
        total_EY=1;//This is to remove any old value stored
        for(loop=1; loop<=year; loop++) //Loop to get the power for 1.05
            total_EY=total_EY*(1.05); //Getting power
        total_EY*=invesment;//Multiplying it with users investment
        printf("%02d\t\t%0.2f\n",year,total_EY);//Prints the data of that year
    }
    return 1;
}
