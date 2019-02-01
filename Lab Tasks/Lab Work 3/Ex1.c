/* This programme is prepared by (FA18-BSE-010) Arose Niazi on 04/10/2018.
This program calculates fuel consumption in liters/100km*/

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
    float liters,km,total_cons=0,consuption;
    int loop=0;
    for(loop=0;;loop++)
    {
        printf("Enter the liters used (-1 to end): ");
        scanf("%f",&liters);
        if(liters < 0)
            break;
        printf("Enter the km driven: ");
        scanf("%f",&km);
        consuption=liters/km*100;
        total_cons+=consuption;
        printf("The liters/100km for this tank was %0.1f\n\n",consuption);
    }
    printf("The overall average consumption was: %0.1f",total_cons/loop);
    return 0;
}
