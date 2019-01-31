/* This programme is prepared by (FA18-BSE-010) Arose Niazi on 04/10/2018.
This programs take 4 digit input and prints its number separately */

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
int Power(int a,int b);
int main()
{
    int loop=0,number,divider=10;
    printf("Enter 4 digit number: ");
    scanf("%d",&number);
    if(number > 9999) return printf("Error: Invalid number, only 4 digits allowed.\n");
    for(loop =3; loop>=0; loop--)
    {
       printf("%d   ",number/Power(divider,loop));
       number=number%Power(divider,loop);
    }
    return 0;
}

int Power(int a,int b)
{
    int power=1,loop;
    for(loop=1; loop <= b; loop++) power= power*a;
    return power;
}
