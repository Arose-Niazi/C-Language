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

int main()
{
    int loop=0,number,no[4]={0,0,0,0};
    printf("Enter 4 digit number: ");
    scanf("%d",&number);
    if(number > 9999) return printf("Error: Invalid number, only 4 digits allowed.\n");
    number=number;
    for(;;)
    {
        if(number >= 1000)
        {
            no[0]++;
            number-=1000;
        }
        else if(number >= 100)
        {
            no[1]++;
            number-=100;
        }
        else if(number >= 10)
        {
            no[2]++;
            number-=10;
        }
        else if(number >= 1)
        {
            no[3]++;
            number-=1;
        }
        else
            break;
    }
    for(loop=0; loop<4; loop++) printf("%d ",no[loop]);
    return 0;
}
