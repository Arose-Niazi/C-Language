/* This programme is prepared by (FA18-BSE-010) Arose Niazi on 01/10/2018.
This programe uses loops to print different series*/

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
    int loop;//Creating variable to control the loops
    printf("a.\n");//Telling that we are printing first series.
    for(loop = 1; loop <= 100; loop++) printf("%d ",loop);//Loop with increment of 1 from 1 to 100
    printf("\n\nb.\n"); //Telling that we are printing second series.
    for(loop = 100; loop >= 1; loop--) printf("%d ",loop); //Loop with decrement of 1 from 100 to 1
    printf("\n\nc.\n"); //Telling that we are printing third series.
    for(loop = 20; loop >= 2; loop-=2) printf("%d ",loop); //Loop with decrement of 2 from 20 to 2
    printf("\n\nd.\n"); //Telling that we are printing fourth series.
    for(loop = 2; loop <= 20; loop+=3) printf("%d ",loop); //Loop with increment of 3 from 2 to 20
    printf("\n\ne.\n"); //Telling that we are printing fifth series.
    for(loop = 99; loop >= 0; loop-=11) printf("%d ",loop); //Loop with decrement of 11 from 99 to 00
    return 0;
}
